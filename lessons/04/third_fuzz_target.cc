// Copyright 2016 Google Inc. All Rights Reserved.
// Licensed under the Apache License, Version 2.0 (the "License");

#include <stdint.h>
#include <stddef.h>

#include "vulnerable_functions.h"

#include <functional>
#include <string>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    VulnerableFunction3(data,size,0x0001000);// 触发 flag = true
    VulnerableFunction3(data,size,0x1000000);// 触发 flag = false

    return 0;
}

