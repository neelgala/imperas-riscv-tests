/*
 * Copyright (c) 2005-2020 Imperas Software Ltd., www.imperas.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied.
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

// VMI header files
#include "vmi/vmiTypes.h"

// model header files
#include "riscvTypeRefs.h"
#include "riscvVariant.h"


//
// Return indication of active trigger types in the current mode
//
riscvArchitecture riscvGetCurrentTriggers(riscvP riscv);

//
// Handle possible execute trigger for faulting address
//
Bool riscvTriggerX0(riscvP riscv, Addr VA, Bool complete);

//
// Handle possible execute trigger for 2-byte instruction
//
void riscvTriggerX2(riscvP riscv, Addr VA, Uns32 value);

//
// Handle possible execute trigger for 4-byte instruction
//
void riscvTriggerX4(riscvP riscv, Addr VA, Uns32 value);

//
// Handle possible load address trigger
//
void riscvTriggerLA(riscvP riscv, Uns32 bytes);

//
// Handle possible load value trigger
//
void riscvTriggerLV(riscvP riscv, Uns32 bytes);

//
// Handle possible store trigger
//
void riscvTriggerS(riscvP riscv, Uns64 value, Uns32 bytes);

