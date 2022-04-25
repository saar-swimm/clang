// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: powerpc-registered-target
// RUN: %clang_cc1 -triple powerpc64-unknown-aix -target-cpu pwr8 \
// RUN:  -verify %s

void test_builtin_ppc_fetch_and_add2() {
  volatile unsigned int a = 0;
  unsigned int b = 0;

  __fetch_and_add(&a, b); // expected-warning {{passing 'volatile unsigned int *' to parameter of type 'volatile int *' converts between pointers to integer types with different sign}}
}

void test_builtin_ppc_fetch_and_addlp() {
  volatile unsigned long a = 0;
  unsigned long b = 0;

  __fetch_and_addlp(&a, b); // expected-warning {{passing 'volatile unsigned long *' to parameter of type 'volatile long *' converts between pointers to integer types with different sign}}
}
