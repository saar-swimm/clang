// RUN: %clang_cc1 -triple x86_64-pc-linux -std=c++17 -ast-dump=json %s | FileCheck %s

enum {
  One,
  Two
};

enum E {
  Three,
  Four
};

enum F : short {
  Five,
  Six
};

enum struct G {
  Seven,
  Eight
};

enum class H {
  Nine,
  Ten
};

enum class I : int {
  Eleven,
  Twelve
};

// NOTE: CHECK lines have been autogenerated by gen_ast_dump_json_test.py
// using --filters=EnumDecl

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "EnumDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 88,
// CHECK-NEXT:   "file": "{{.*}}",
// CHECK-NEXT:   "line": 3,
// CHECK-NEXT:   "col": 1,
// CHECK-NEXT:   "tokLen": 4
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 88,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 108,
// CHECK-NEXT:    "line": 6,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 97,
// CHECK-NEXT:     "line": 4,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 3
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 97,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 97,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "One",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "(unnamed enum at {{.*}}:3:1)"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 104,
// CHECK-NEXT:     "line": 5,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 3
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 104,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 104,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Two",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "(unnamed enum at {{.*}}:3:1)"
// CHECK-NEXT:    }
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "EnumDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 117,
// CHECK-NEXT:   "line": 8,
// CHECK-NEXT:   "col": 6,
// CHECK-NEXT:   "tokLen": 1
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 112,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 137,
// CHECK-NEXT:    "line": 11,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "E",
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 123,
// CHECK-NEXT:     "line": 9,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 5
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 123,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 5
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 123,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 5
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Three",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "E"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 132,
// CHECK-NEXT:     "line": 10,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 4
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 132,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 4
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 132,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 4
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Four",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "E"
// CHECK-NEXT:    }
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "EnumDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 146,
// CHECK-NEXT:   "line": 13,
// CHECK-NEXT:   "col": 6,
// CHECK-NEXT:   "tokLen": 1
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 141,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 172,
// CHECK-NEXT:    "line": 16,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "F",
// CHECK-NEXT:  "fixedUnderlyingType": {
// CHECK-NEXT:   "qualType": "short"
// CHECK-NEXT:  },
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 160,
// CHECK-NEXT:     "line": 14,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 4
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 160,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 4
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 160,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 4
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Five",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "F"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 168,
// CHECK-NEXT:     "line": 15,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 3
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 168,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 168,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Six",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "F"
// CHECK-NEXT:    }
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "EnumDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 188,
// CHECK-NEXT:   "line": 18,
// CHECK-NEXT:   "col": 13,
// CHECK-NEXT:   "tokLen": 1
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 176,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 209,
// CHECK-NEXT:    "line": 21,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "G",
// CHECK-NEXT:  "fixedUnderlyingType": {
// CHECK-NEXT:   "qualType": "int"
// CHECK-NEXT:  },
// CHECK-NEXT:  "scopedEnumTag": "struct",
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 194,
// CHECK-NEXT:     "line": 19,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 5
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 194,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 5
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 194,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 5
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Seven",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "G"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 203,
// CHECK-NEXT:     "line": 20,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 5
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 203,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 5
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 203,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 5
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Eight",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "G"
// CHECK-NEXT:    }
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "EnumDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 224,
// CHECK-NEXT:   "line": 23,
// CHECK-NEXT:   "col": 12,
// CHECK-NEXT:   "tokLen": 1
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 213,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 242,
// CHECK-NEXT:    "line": 26,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "H",
// CHECK-NEXT:  "fixedUnderlyingType": {
// CHECK-NEXT:   "qualType": "int"
// CHECK-NEXT:  },
// CHECK-NEXT:  "scopedEnumTag": "class",
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 230,
// CHECK-NEXT:     "line": 24,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 4
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 230,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 4
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 230,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 4
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Nine",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "H"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 238,
// CHECK-NEXT:     "line": 25,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 3
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 238,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 238,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Ten",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "H"
// CHECK-NEXT:    }
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "EnumDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 257,
// CHECK-NEXT:   "line": 28,
// CHECK-NEXT:   "col": 12,
// CHECK-NEXT:   "tokLen": 1
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 246,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 286,
// CHECK-NEXT:    "line": 31,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "I",
// CHECK-NEXT:  "fixedUnderlyingType": {
// CHECK-NEXT:   "qualType": "int"
// CHECK-NEXT:  },
// CHECK-NEXT:  "scopedEnumTag": "class",
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 269,
// CHECK-NEXT:     "line": 29,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 6
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 269,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 6
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 269,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 6
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Eleven",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "I"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "EnumConstantDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 279,
// CHECK-NEXT:     "line": 30,
// CHECK-NEXT:     "col": 3,
// CHECK-NEXT:     "tokLen": 6
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 279,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 6
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 279,
// CHECK-NEXT:      "col": 3,
// CHECK-NEXT:      "tokLen": 6
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "name": "Twelve",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "I"
// CHECK-NEXT:    }
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }
