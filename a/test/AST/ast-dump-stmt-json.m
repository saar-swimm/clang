// RUN: %clang_cc1 -triple x86_64-pc-win32 -Wno-unused -fblocks -fobjc-exceptions -ast-dump=json -ast-dump-filter Test %s | FileCheck %s

void TestBlockExpr(int x) {
  ^{ x; };
}

void TestExprWithCleanup(int x) {
  ^{ x; };
}

@interface A
@end

void TestObjCAtCatchStmt() {
  @try {
  } @catch(A *a) {
  } @catch(...) {
  } @finally {
  }
}

// NOTE: CHECK lines have been autogenerated by gen_ast_dump_json_test.py

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "FunctionDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 143,
// CHECK-NEXT:   "file": "{{.*}}",
// CHECK-NEXT:   "line": 3,
// CHECK-NEXT:   "col": 6,
// CHECK-NEXT:   "tokLen": 13
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 138,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 177,
// CHECK-NEXT:    "line": 5,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "TestBlockExpr",
// CHECK-NEXT:  "mangledName": "TestBlockExpr",
// CHECK-NEXT:  "type": {
// CHECK-NEXT:   "qualType": "void (int)"
// CHECK-NEXT:  },
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "ParmVarDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 161,
// CHECK-NEXT:     "line": 3,
// CHECK-NEXT:     "col": 24,
// CHECK-NEXT:     "tokLen": 1
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 157,
// CHECK-NEXT:      "col": 20,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 161,
// CHECK-NEXT:      "col": 24,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "isUsed": true,
// CHECK-NEXT:    "name": "x",
// CHECK-NEXT:    "mangledName": "x",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "int"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "CompoundStmt",
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 164,
// CHECK-NEXT:      "col": 27,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 177,
// CHECK-NEXT:      "line": 5,
// CHECK-NEXT:      "col": 1,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "inner": [
// CHECK-NEXT:     {
// CHECK-NEXT:      "id": "0x{{.*}}",
// CHECK-NEXT:      "kind": "ExprWithCleanups",
// CHECK-NEXT:      "range": {
// CHECK-NEXT:       "begin": {
// CHECK-NEXT:        "offset": 168,
// CHECK-NEXT:        "line": 4,
// CHECK-NEXT:        "col": 3,
// CHECK-NEXT:        "tokLen": 1
// CHECK-NEXT:       },
// CHECK-NEXT:       "end": {
// CHECK-NEXT:        "offset": 174,
// CHECK-NEXT:        "col": 9,
// CHECK-NEXT:        "tokLen": 1
// CHECK-NEXT:       }
// CHECK-NEXT:      },
// CHECK-NEXT:      "type": {
// CHECK-NEXT:       "qualType": "void (^)(void)"
// CHECK-NEXT:      },
// CHECK-NEXT:      "valueCategory": "prvalue",
// CHECK-NEXT:      "cleanupsHaveSideEffects": true,
// CHECK-NEXT:      "cleanups": [
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "BlockDecl"
// CHECK-NEXT:       }
// CHECK-NEXT:      ],
// CHECK-NEXT:      "inner": [
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "BlockExpr",
// CHECK-NEXT:        "range": {
// CHECK-NEXT:         "begin": {
// CHECK-NEXT:          "offset": 168,
// CHECK-NEXT:          "col": 3,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         },
// CHECK-NEXT:         "end": {
// CHECK-NEXT:          "offset": 174,
// CHECK-NEXT:          "col": 9,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         }
// CHECK-NEXT:        },
// CHECK-NEXT:        "type": {
// CHECK-NEXT:         "qualType": "void (^)(void)"
// CHECK-NEXT:        },
// CHECK-NEXT:        "valueCategory": "prvalue",
// CHECK-NEXT:        "inner": [
// CHECK-NEXT:         {
// CHECK-NEXT:          "id": "0x{{.*}}",
// CHECK-NEXT:          "kind": "BlockDecl",
// CHECK-NEXT:          "loc": {
// CHECK-NEXT:           "offset": 168,
// CHECK-NEXT:           "col": 3,
// CHECK-NEXT:           "tokLen": 1
// CHECK-NEXT:          },
// CHECK-NEXT:          "range": {
// CHECK-NEXT:           "begin": {
// CHECK-NEXT:            "offset": 168,
// CHECK-NEXT:            "col": 3,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           },
// CHECK-NEXT:           "end": {
// CHECK-NEXT:            "offset": 174,
// CHECK-NEXT:            "col": 9,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           }
// CHECK-NEXT:          },
// CHECK-NEXT:          "inner": [
// CHECK-NEXT:           {
// CHECK-NEXT:            "kind": "Capture",
// CHECK-NEXT:            "var": {
// CHECK-NEXT:             "id": "0x{{.*}}",
// CHECK-NEXT:             "kind": "ParmVarDecl",
// CHECK-NEXT:             "name": "x",
// CHECK-NEXT:             "type": {
// CHECK-NEXT:              "qualType": "int"
// CHECK-NEXT:             }
// CHECK-NEXT:            }
// CHECK-NEXT:           },
// CHECK-NEXT:           {
// CHECK-NEXT:            "id": "0x{{.*}}",
// CHECK-NEXT:            "kind": "CompoundStmt",
// CHECK-NEXT:            "range": {
// CHECK-NEXT:             "begin": {
// CHECK-NEXT:              "offset": 169,
// CHECK-NEXT:              "col": 4,
// CHECK-NEXT:              "tokLen": 1
// CHECK-NEXT:             },
// CHECK-NEXT:             "end": {
// CHECK-NEXT:              "offset": 174,
// CHECK-NEXT:              "col": 9,
// CHECK-NEXT:              "tokLen": 1
// CHECK-NEXT:             }
// CHECK-NEXT:            },
// CHECK-NEXT:            "inner": [
// CHECK-NEXT:             {
// CHECK-NEXT:              "id": "0x{{.*}}",
// CHECK-NEXT:              "kind": "ImplicitCastExpr",
// CHECK-NEXT:              "range": {
// CHECK-NEXT:               "begin": {
// CHECK-NEXT:                "offset": 171,
// CHECK-NEXT:                "col": 6,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               },
// CHECK-NEXT:               "end": {
// CHECK-NEXT:                "offset": 171,
// CHECK-NEXT:                "col": 6,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               }
// CHECK-NEXT:              },
// CHECK-NEXT:              "type": {
// CHECK-NEXT:               "qualType": "int"
// CHECK-NEXT:              },
// CHECK-NEXT:              "valueCategory": "prvalue",
// CHECK-NEXT:              "castKind": "LValueToRValue",
// CHECK-NEXT:              "inner": [
// CHECK-NEXT:               {
// CHECK-NEXT:                "id": "0x{{.*}}",
// CHECK-NEXT:                "kind": "DeclRefExpr",
// CHECK-NEXT:                "range": {
// CHECK-NEXT:                 "begin": {
// CHECK-NEXT:                  "offset": 171,
// CHECK-NEXT:                  "col": 6,
// CHECK-NEXT:                  "tokLen": 1
// CHECK-NEXT:                 },
// CHECK-NEXT:                 "end": {
// CHECK-NEXT:                  "offset": 171,
// CHECK-NEXT:                  "col": 6,
// CHECK-NEXT:                  "tokLen": 1
// CHECK-NEXT:                 }
// CHECK-NEXT:                },
// CHECK-NEXT:                "type": {
// CHECK-NEXT:                 "qualType": "const int"
// CHECK-NEXT:                },
// CHECK-NEXT:                "valueCategory": "lvalue",
// CHECK-NEXT:                "referencedDecl": {
// CHECK-NEXT:                 "id": "0x{{.*}}",
// CHECK-NEXT:                 "kind": "ParmVarDecl",
// CHECK-NEXT:                 "name": "x",
// CHECK-NEXT:                 "type": {
// CHECK-NEXT:                  "qualType": "int"
// CHECK-NEXT:                 }
// CHECK-NEXT:                }
// CHECK-NEXT:               }
// CHECK-NEXT:              ]
// CHECK-NEXT:             }
// CHECK-NEXT:            ]
// CHECK-NEXT:           }
// CHECK-NEXT:          ]
// CHECK-NEXT:         }
// CHECK-NEXT:        ]
// CHECK-NEXT:       }
// CHECK-NEXT:      ]
// CHECK-NEXT:     }
// CHECK-NEXT:    ]
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "FunctionDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 185,
// CHECK-NEXT:   "file": "{{.*}}",
// CHECK-NEXT:   "line": 7,
// CHECK-NEXT:   "col": 6,
// CHECK-NEXT:   "tokLen": 19
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 180,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 225,
// CHECK-NEXT:    "line": 9,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "TestExprWithCleanup",
// CHECK-NEXT:  "mangledName": "TestExprWithCleanup",
// CHECK-NEXT:  "type": {
// CHECK-NEXT:   "qualType": "void (int)"
// CHECK-NEXT:  },
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "ParmVarDecl",
// CHECK-NEXT:    "loc": {
// CHECK-NEXT:     "offset": 209,
// CHECK-NEXT:     "line": 7,
// CHECK-NEXT:     "col": 30,
// CHECK-NEXT:     "tokLen": 1
// CHECK-NEXT:    },
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 205,
// CHECK-NEXT:      "col": 26,
// CHECK-NEXT:      "tokLen": 3
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 209,
// CHECK-NEXT:      "col": 30,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "isUsed": true,
// CHECK-NEXT:    "name": "x",
// CHECK-NEXT:    "mangledName": "x",
// CHECK-NEXT:    "type": {
// CHECK-NEXT:     "qualType": "int"
// CHECK-NEXT:    }
// CHECK-NEXT:   },
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "CompoundStmt",
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 212,
// CHECK-NEXT:      "col": 33,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 225,
// CHECK-NEXT:      "line": 9,
// CHECK-NEXT:      "col": 1,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "inner": [
// CHECK-NEXT:     {
// CHECK-NEXT:      "id": "0x{{.*}}",
// CHECK-NEXT:      "kind": "ExprWithCleanups",
// CHECK-NEXT:      "range": {
// CHECK-NEXT:       "begin": {
// CHECK-NEXT:        "offset": 216,
// CHECK-NEXT:        "line": 8,
// CHECK-NEXT:        "col": 3,
// CHECK-NEXT:        "tokLen": 1
// CHECK-NEXT:       },
// CHECK-NEXT:       "end": {
// CHECK-NEXT:        "offset": 222,
// CHECK-NEXT:        "col": 9,
// CHECK-NEXT:        "tokLen": 1
// CHECK-NEXT:       }
// CHECK-NEXT:      },
// CHECK-NEXT:      "type": {
// CHECK-NEXT:       "qualType": "void (^)(void)"
// CHECK-NEXT:      },
// CHECK-NEXT:      "valueCategory": "prvalue",
// CHECK-NEXT:      "cleanupsHaveSideEffects": true,
// CHECK-NEXT:      "cleanups": [
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "BlockDecl"
// CHECK-NEXT:       }
// CHECK-NEXT:      ],
// CHECK-NEXT:      "inner": [
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "BlockExpr",
// CHECK-NEXT:        "range": {
// CHECK-NEXT:         "begin": {
// CHECK-NEXT:          "offset": 216,
// CHECK-NEXT:          "col": 3,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         },
// CHECK-NEXT:         "end": {
// CHECK-NEXT:          "offset": 222,
// CHECK-NEXT:          "col": 9,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         }
// CHECK-NEXT:        },
// CHECK-NEXT:        "type": {
// CHECK-NEXT:         "qualType": "void (^)(void)"
// CHECK-NEXT:        },
// CHECK-NEXT:        "valueCategory": "prvalue",
// CHECK-NEXT:        "inner": [
// CHECK-NEXT:         {
// CHECK-NEXT:          "id": "0x{{.*}}",
// CHECK-NEXT:          "kind": "BlockDecl",
// CHECK-NEXT:          "loc": {
// CHECK-NEXT:           "offset": 216,
// CHECK-NEXT:           "col": 3,
// CHECK-NEXT:           "tokLen": 1
// CHECK-NEXT:          },
// CHECK-NEXT:          "range": {
// CHECK-NEXT:           "begin": {
// CHECK-NEXT:            "offset": 216,
// CHECK-NEXT:            "col": 3,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           },
// CHECK-NEXT:           "end": {
// CHECK-NEXT:            "offset": 222,
// CHECK-NEXT:            "col": 9,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           }
// CHECK-NEXT:          },
// CHECK-NEXT:          "inner": [
// CHECK-NEXT:           {
// CHECK-NEXT:            "kind": "Capture",
// CHECK-NEXT:            "var": {
// CHECK-NEXT:             "id": "0x{{.*}}",
// CHECK-NEXT:             "kind": "ParmVarDecl",
// CHECK-NEXT:             "name": "x",
// CHECK-NEXT:             "type": {
// CHECK-NEXT:              "qualType": "int"
// CHECK-NEXT:             }
// CHECK-NEXT:            }
// CHECK-NEXT:           },
// CHECK-NEXT:           {
// CHECK-NEXT:            "id": "0x{{.*}}",
// CHECK-NEXT:            "kind": "CompoundStmt",
// CHECK-NEXT:            "range": {
// CHECK-NEXT:             "begin": {
// CHECK-NEXT:              "offset": 217,
// CHECK-NEXT:              "col": 4,
// CHECK-NEXT:              "tokLen": 1
// CHECK-NEXT:             },
// CHECK-NEXT:             "end": {
// CHECK-NEXT:              "offset": 222,
// CHECK-NEXT:              "col": 9,
// CHECK-NEXT:              "tokLen": 1
// CHECK-NEXT:             }
// CHECK-NEXT:            },
// CHECK-NEXT:            "inner": [
// CHECK-NEXT:             {
// CHECK-NEXT:              "id": "0x{{.*}}",
// CHECK-NEXT:              "kind": "ImplicitCastExpr",
// CHECK-NEXT:              "range": {
// CHECK-NEXT:               "begin": {
// CHECK-NEXT:                "offset": 219,
// CHECK-NEXT:                "col": 6,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               },
// CHECK-NEXT:               "end": {
// CHECK-NEXT:                "offset": 219,
// CHECK-NEXT:                "col": 6,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               }
// CHECK-NEXT:              },
// CHECK-NEXT:              "type": {
// CHECK-NEXT:               "qualType": "int"
// CHECK-NEXT:              },
// CHECK-NEXT:              "valueCategory": "prvalue",
// CHECK-NEXT:              "castKind": "LValueToRValue",
// CHECK-NEXT:              "inner": [
// CHECK-NEXT:               {
// CHECK-NEXT:                "id": "0x{{.*}}",
// CHECK-NEXT:                "kind": "DeclRefExpr",
// CHECK-NEXT:                "range": {
// CHECK-NEXT:                 "begin": {
// CHECK-NEXT:                  "offset": 219,
// CHECK-NEXT:                  "col": 6,
// CHECK-NEXT:                  "tokLen": 1
// CHECK-NEXT:                 },
// CHECK-NEXT:                 "end": {
// CHECK-NEXT:                  "offset": 219,
// CHECK-NEXT:                  "col": 6,
// CHECK-NEXT:                  "tokLen": 1
// CHECK-NEXT:                 }
// CHECK-NEXT:                },
// CHECK-NEXT:                "type": {
// CHECK-NEXT:                 "qualType": "const int"
// CHECK-NEXT:                },
// CHECK-NEXT:                "valueCategory": "lvalue",
// CHECK-NEXT:                "referencedDecl": {
// CHECK-NEXT:                 "id": "0x{{.*}}",
// CHECK-NEXT:                 "kind": "ParmVarDecl",
// CHECK-NEXT:                 "name": "x",
// CHECK-NEXT:                 "type": {
// CHECK-NEXT:                  "qualType": "int"
// CHECK-NEXT:                 }
// CHECK-NEXT:                }
// CHECK-NEXT:               }
// CHECK-NEXT:              ]
// CHECK-NEXT:             }
// CHECK-NEXT:            ]
// CHECK-NEXT:           }
// CHECK-NEXT:          ]
// CHECK-NEXT:         }
// CHECK-NEXT:        ]
// CHECK-NEXT:       }
// CHECK-NEXT:      ]
// CHECK-NEXT:     }
// CHECK-NEXT:    ]
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }

// CHECK-NOT: {{^}}Dumping
// CHECK:  "kind": "FunctionDecl",
// CHECK-NEXT:  "loc": {
// CHECK-NEXT:   "offset": 252,
// CHECK-NEXT:   "file": "{{.*}}",
// CHECK-NEXT:   "line": 14,
// CHECK-NEXT:   "col": 6,
// CHECK-NEXT:   "tokLen": 19
// CHECK-NEXT:  },
// CHECK-NEXT:  "range": {
// CHECK-NEXT:   "begin": {
// CHECK-NEXT:    "offset": 247,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 4
// CHECK-NEXT:   },
// CHECK-NEXT:   "end": {
// CHECK-NEXT:    "offset": 341,
// CHECK-NEXT:    "line": 20,
// CHECK-NEXT:    "col": 1,
// CHECK-NEXT:    "tokLen": 1
// CHECK-NEXT:   }
// CHECK-NEXT:  },
// CHECK-NEXT:  "name": "TestObjCAtCatchStmt",
// CHECK-NEXT:  "mangledName": "TestObjCAtCatchStmt",
// CHECK-NEXT:  "type": {
// CHECK-NEXT:   "qualType": "void ()"
// CHECK-NEXT:  },
// CHECK-NEXT:  "inner": [
// CHECK-NEXT:   {
// CHECK-NEXT:    "id": "0x{{.*}}",
// CHECK-NEXT:    "kind": "CompoundStmt",
// CHECK-NEXT:    "range": {
// CHECK-NEXT:     "begin": {
// CHECK-NEXT:      "offset": 274,
// CHECK-NEXT:      "line": 14,
// CHECK-NEXT:      "col": 28,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     },
// CHECK-NEXT:     "end": {
// CHECK-NEXT:      "offset": 341,
// CHECK-NEXT:      "line": 20,
// CHECK-NEXT:      "col": 1,
// CHECK-NEXT:      "tokLen": 1
// CHECK-NEXT:     }
// CHECK-NEXT:    },
// CHECK-NEXT:    "inner": [
// CHECK-NEXT:     {
// CHECK-NEXT:      "id": "0x{{.*}}",
// CHECK-NEXT:      "kind": "ObjCAtTryStmt",
// CHECK-NEXT:      "range": {
// CHECK-NEXT:       "begin": {
// CHECK-NEXT:        "offset": 278,
// CHECK-NEXT:        "line": 15,
// CHECK-NEXT:        "col": 3,
// CHECK-NEXT:        "tokLen": 1
// CHECK-NEXT:       },
// CHECK-NEXT:       "end": {
// CHECK-NEXT:        "offset": 339,
// CHECK-NEXT:        "line": 19,
// CHECK-NEXT:        "col": 3,
// CHECK-NEXT:        "tokLen": 1
// CHECK-NEXT:       }
// CHECK-NEXT:      },
// CHECK-NEXT:      "inner": [
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "CompoundStmt",
// CHECK-NEXT:        "range": {
// CHECK-NEXT:         "begin": {
// CHECK-NEXT:          "offset": 283,
// CHECK-NEXT:          "line": 15,
// CHECK-NEXT:          "col": 8,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         },
// CHECK-NEXT:         "end": {
// CHECK-NEXT:          "offset": 287,
// CHECK-NEXT:          "line": 16,
// CHECK-NEXT:          "col": 3,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         }
// CHECK-NEXT:        }
// CHECK-NEXT:       },
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "ObjCAtCatchStmt",
// CHECK-NEXT:        "range": {
// CHECK-NEXT:         "begin": {
// CHECK-NEXT:          "offset": 289,
// CHECK-NEXT:          "col": 5,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         },
// CHECK-NEXT:         "end": {
// CHECK-NEXT:          "offset": 306,
// CHECK-NEXT:          "line": 17,
// CHECK-NEXT:          "col": 3,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         }
// CHECK-NEXT:        },
// CHECK-NEXT:        "inner": [
// CHECK-NEXT:         {
// CHECK-NEXT:          "id": "0x{{.*}}",
// CHECK-NEXT:          "kind": "VarDecl",
// CHECK-NEXT:          "loc": {
// CHECK-NEXT:           "offset": 299,
// CHECK-NEXT:           "line": 16,
// CHECK-NEXT:           "col": 15,
// CHECK-NEXT:           "tokLen": 1
// CHECK-NEXT:          },
// CHECK-NEXT:          "range": {
// CHECK-NEXT:           "begin": {
// CHECK-NEXT:            "offset": 296,
// CHECK-NEXT:            "col": 12,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           },
// CHECK-NEXT:           "end": {
// CHECK-NEXT:            "offset": 299,
// CHECK-NEXT:            "col": 15,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           }
// CHECK-NEXT:          },
// CHECK-NEXT:          "name": "a",
// CHECK-NEXT:          "mangledName": "a",
// CHECK-NEXT:          "type": {
// CHECK-NEXT:           "qualType": "A *"
// CHECK-NEXT:          }
// CHECK-NEXT:         },
// CHECK-NEXT:         {
// CHECK-NEXT:          "id": "0x{{.*}}",
// CHECK-NEXT:          "kind": "CompoundStmt",
// CHECK-NEXT:          "range": {
// CHECK-NEXT:           "begin": {
// CHECK-NEXT:            "offset": 302,
// CHECK-NEXT:            "col": 18,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           },
// CHECK-NEXT:           "end": {
// CHECK-NEXT:            "offset": 306,
// CHECK-NEXT:            "line": 17,
// CHECK-NEXT:            "col": 3,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           }
// CHECK-NEXT:          }
// CHECK-NEXT:         }
// CHECK-NEXT:        ]
// CHECK-NEXT:       },
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "ObjCAtCatchStmt",
// CHECK-NEXT:        "range": {
// CHECK-NEXT:         "begin": {
// CHECK-NEXT:          "offset": 308,
// CHECK-NEXT:          "col": 5,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         },
// CHECK-NEXT:         "end": {
// CHECK-NEXT:          "offset": 324,
// CHECK-NEXT:          "line": 18,
// CHECK-NEXT:          "col": 3,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         }
// CHECK-NEXT:        },
// CHECK-NEXT:        "isCatchAll": true,
// CHECK-NEXT:        "inner": [
// CHECK-NEXT:         {
// CHECK-NEXT:          "id": "0x{{.*}}",
// CHECK-NEXT:          "kind": "CompoundStmt",
// CHECK-NEXT:          "range": {
// CHECK-NEXT:           "begin": {
// CHECK-NEXT:            "offset": 320,
// CHECK-NEXT:            "line": 17,
// CHECK-NEXT:            "col": 17,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           },
// CHECK-NEXT:           "end": {
// CHECK-NEXT:            "offset": 324,
// CHECK-NEXT:            "line": 18,
// CHECK-NEXT:            "col": 3,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           }
// CHECK-NEXT:          }
// CHECK-NEXT:         }
// CHECK-NEXT:        ]
// CHECK-NEXT:       },
// CHECK-NEXT:       {
// CHECK-NEXT:        "id": "0x{{.*}}",
// CHECK-NEXT:        "kind": "ObjCAtFinallyStmt",
// CHECK-NEXT:        "range": {
// CHECK-NEXT:         "begin": {
// CHECK-NEXT:          "offset": 326,
// CHECK-NEXT:          "col": 5,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         },
// CHECK-NEXT:         "end": {
// CHECK-NEXT:          "offset": 339,
// CHECK-NEXT:          "line": 19,
// CHECK-NEXT:          "col": 3,
// CHECK-NEXT:          "tokLen": 1
// CHECK-NEXT:         }
// CHECK-NEXT:        },
// CHECK-NEXT:        "inner": [
// CHECK-NEXT:         {
// CHECK-NEXT:          "id": "0x{{.*}}",
// CHECK-NEXT:          "kind": "CapturedStmt",
// CHECK-NEXT:          "range": {
// CHECK-NEXT:           "begin": {
// CHECK-NEXT:            "offset": 335,
// CHECK-NEXT:            "line": 18,
// CHECK-NEXT:            "col": 14,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           },
// CHECK-NEXT:           "end": {
// CHECK-NEXT:            "offset": 339,
// CHECK-NEXT:            "line": 19,
// CHECK-NEXT:            "col": 3,
// CHECK-NEXT:            "tokLen": 1
// CHECK-NEXT:           }
// CHECK-NEXT:          },
// CHECK-NEXT:          "inner": [
// CHECK-NEXT:           {
// CHECK-NEXT:            "id": "0x{{.*}}",
// CHECK-NEXT:            "kind": "CapturedDecl",
// CHECK-NEXT:            "loc": {},
// CHECK-NEXT:            "range": {
// CHECK-NEXT:             "begin": {},
// CHECK-NEXT:             "end": {}
// CHECK-NEXT:            },
// CHECK-NEXT:            "inner": [
// CHECK-NEXT:             {
// CHECK-NEXT:              "id": "0x{{.*}}",
// CHECK-NEXT:              "kind": "CompoundStmt",
// CHECK-NEXT:              "range": {
// CHECK-NEXT:               "begin": {
// CHECK-NEXT:                "offset": 335,
// CHECK-NEXT:                "line": 18,
// CHECK-NEXT:                "col": 14,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               },
// CHECK-NEXT:               "end": {
// CHECK-NEXT:                "offset": 339,
// CHECK-NEXT:                "line": 19,
// CHECK-NEXT:                "col": 3,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               }
// CHECK-NEXT:              }
// CHECK-NEXT:             },
// CHECK-NEXT:             {
// CHECK-NEXT:              "id": "0x{{.*}}",
// CHECK-NEXT:              "kind": "ImplicitParamDecl",
// CHECK-NEXT:              "loc": {
// CHECK-NEXT:               "offset": 335,
// CHECK-NEXT:               "line": 18,
// CHECK-NEXT:               "col": 14,
// CHECK-NEXT:               "tokLen": 1
// CHECK-NEXT:              },
// CHECK-NEXT:              "range": {
// CHECK-NEXT:               "begin": {
// CHECK-NEXT:                "offset": 335,
// CHECK-NEXT:                "col": 14,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               },
// CHECK-NEXT:               "end": {
// CHECK-NEXT:                "offset": 335,
// CHECK-NEXT:                "col": 14,
// CHECK-NEXT:                "tokLen": 1
// CHECK-NEXT:               }
// CHECK-NEXT:              },
// CHECK-NEXT:              "isImplicit": true,
// CHECK-NEXT:              "name": "__context",
// CHECK-NEXT:              "mangledName": "__context",
// CHECK-NEXT:              "type": {
// CHECK-NEXT:               "qualType": "struct (unnamed at {{.*}}:18:14) *"
// CHECK-NEXT:              }
// CHECK-NEXT:             }
// CHECK-NEXT:            ]
// CHECK-NEXT:           }
// CHECK-NEXT:          ]
// CHECK-NEXT:         }
// CHECK-NEXT:        ]
// CHECK-NEXT:       }
// CHECK-NEXT:      ]
// CHECK-NEXT:     }
// CHECK-NEXT:    ]
// CHECK-NEXT:   }
// CHECK-NEXT:  ]
// CHECK-NEXT: }
