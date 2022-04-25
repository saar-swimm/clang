// RUN: %clang_cc1 -fsyntax-only -verify %s -triple x86_64-linux-gnu -target-feature -x87 -target-feature -sse -DERROR_LONGDOUBLE -DERROR_NOSSE
// RUN: %clang_cc1 -fsyntax-only -verify %s -triple x86_64-linux-gnu -target-feature -x87 -DERROR_LONGDOUBLE
// RUN: %clang_cc1 -fsyntax-only -verify %s -triple x86_64-linux-gnu -DNOERROR

#ifdef NOERROR
// expected-no-diagnostics
#endif

typedef long double long_double;

// Declaration is fine, unless it is called or defined.
double decl(long_double x, long_double y);

template <typename T>
T decl_ld_del(T);

// No code is generated for deleted functions
long_double decl_ld_del(long_double) = delete;
double decl_ld_del(double) = delete;
float decl_ld_del(float) = delete;

#ifdef ERROR_LONGDOUBLE
// expected-error@+4{{'def' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
// expected-note@+3{{'def' defined here}}
// expected-note@+2{{'x' defined here}}
#endif
int def(long_double x) {
#ifdef ERROR_LONGDOUBLE
// expected-error@+2{{'x' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  return (int)x;
}

#ifdef ERROR_LONGDOUBLE
// expected-note@+3{{'ld_args' defined here}}
// expected-note@+2{{'ld_args' defined here}}
#endif
int ld_args(long_double x, long_double y);

int call1(float x, float y) {
#ifdef ERROR_LONGDOUBLE
  // expected-error@+2 2{{'ld_args' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  return ld_args(x, y);
}

#ifdef ERROR_LONGDOUBLE
// expected-note@+2{{'ld_ret' defined here}}
#endif
long_double ld_ret(double x, double y);

int call2(float x, float y) {
#ifdef ERROR_LONGDOUBLE
  // expected-error@+2{{'ld_ret' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  return (int)ld_ret(x, y);
}

int binop(double x, double y) {
#ifdef ERROR_LONGDOUBLE
  // expected-error@+2 2{{expression requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  double z = (long_double)x * (long_double)y;
  return (int)z;
}

void assign1(long_double *ret, double x) {
#ifdef ERROR_LONGDOUBLE
  // expected-error@+2{{expression requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  *ret = x;
}

struct st_long_double1 {
#ifdef ERROR_LONGDOUBLE
  // expected-note@+2{{'ld' defined here}}
#endif
  long_double ld;
};

struct st_long_double2 {
#ifdef ERROR_LONGDOUBLE
  // expected-note@+2{{'ld' defined here}}
#endif
  long_double ld;
};

struct st_long_double3 {
#ifdef ERROR_LONGDOUBLE
  // expected-note@+2{{'ld' defined here}}
#endif
  long_double ld;
};

void assign2() {
  struct st_long_double1 st;
#ifdef ERROR_LONGDOUBLE
  // expected-error@+3{{expression requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
  // expected-error@+2{{'ld' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  st.ld = 0.42;
}

void assign3() {
  struct st_long_double2 st;
#ifdef ERROR_LONGDOUBLE
  // expected-error@+3{{expression requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
  // expected-error@+2{{'ld' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  st.ld = 42;
}

void assign4(double d) {
  struct st_long_double3 st;
#ifdef ERROR_LONGDOUBLE
  // expected-error@+3{{expression requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
  // expected-error@+2{{'ld' requires  'long_double' (aka 'long double') type support, but target 'x86_64-unknown-linux-gnu' does not support it}}
#endif
  st.ld = d;
}

void assign5() {
  // unused variable declaration is fine
  long_double ld = 0.42;
}

// Double and Float return type on x86_64 do not use x87 registers
#ifdef ERROR_NOSSE
  // expected-error@+3{{SSE register return with SSE disabled}}
  // expected-note@+2{{'d_ret1' defined here}}
#endif
double d_ret1(float x) {
  return 0.0;
}

#ifdef ERROR_NOSSE
  // expected-note@+2{{'d_ret2' defined here}}
#endif
double d_ret2(float x);

#ifdef ERROR_NOSSE
  // expected-error@+3{{SSE register return with SSE disabled}}
#endif
int d_ret3(float x) {
  return (int)d_ret2(x);
}

#ifdef ERROR_NOSSE
  // expected-error@+3{{SSE register return with SSE disabled}}
  // expected-note@+2{{'f_ret1' defined here}}
#endif
float f_ret1(float x) {
  return 0.0f;
}

#ifdef ERROR_NOSSE
  // expected-note@+2{{'f_ret2' defined here}}
#endif
float f_ret2(float x);

#ifdef ERROR_NOSSE
  // expected-error@+3{{SSE register return with SSE disabled}}
#endif
int f_ret3(float x) {
  return (int)f_ret2(x);
}
