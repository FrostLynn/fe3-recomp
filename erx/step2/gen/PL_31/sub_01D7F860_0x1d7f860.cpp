#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D7F860
// Address: 0x1d7f860 - 0x1d7f970
void sub_01D7F860_0x1d7f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F860_0x1d7f860");
#endif

    switch (ctx->pc) {
        case 0x1d7f880u: goto label_1d7f880;
        case 0x1d7f894u: goto label_1d7f894;
        case 0x1d7f898u: goto label_1d7f898;
        case 0x1d7f8b4u: goto label_1d7f8b4;
        case 0x1d7f8c4u: goto label_1d7f8c4;
        case 0x1d7f910u: goto label_1d7f910;
        case 0x1d7f94cu: goto label_1d7f94c;
        case 0x1d7f958u: goto label_1d7f958;
        default: break;
    }

    ctx->pc = 0x1d7f860u;

    // 0x1d7f860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7f86c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7f86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7f870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7f870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f874: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7f874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7f878: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F878u;
    SET_GPR_U32(ctx, 31, 0x1D7F880u);
    ctx->pc = 0x1D7F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F878u;
    // 0x1d7f87c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F878u, 0x1D7F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F880u;
label_1d7f880:
    // 0x1d7f880: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d7f880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d7f884: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7F884u;
    {
        const bool branch_taken_0x1d7f884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F884u;
        // 0x1d7f888: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f884) {
            ctx->pc = 0x1D7F8D0u;
            goto label_1d7f8d0;
        }
    }
    ctx->pc = 0x1D7F88Cu;
    // 0x1d7f88c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7F88Cu;
    {
        const bool branch_taken_0x1d7f88c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d7f88c) {
            ctx->pc = 0x1D7F8ACu;
            goto label_1d7f8ac;
        }
    }
    ctx->pc = 0x1D7F894u;
label_1d7f894:
    // 0x1d7f894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7f894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f898:
    // 0x1d7f898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f89c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f89cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F8A4u;
        // 0x1d7f8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F8ACu;
label_1d7f8ac:
    // 0x1d7f8ac: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F8ACu;
    SET_GPR_U32(ctx, 31, 0x1D7F8B4u);
    ctx->pc = 0x1D7F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F8ACu;
    // 0x1d7f8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F8ACu, 0x1D7F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F8B4u;
label_1d7f8b4:
    // 0x1d7f8b4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D7F8B4u;
    {
        const bool branch_taken_0x1d7f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D7F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F8B4u;
        // 0x1d7f8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f8b4) {
            ctx->pc = 0x1D7F894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f894;
        }
    }
    ctx->pc = 0x1D7F8BCu;
    // 0x1d7f8bc: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F8BCu;
    SET_GPR_U32(ctx, 31, 0x1D7F8C4u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F8BCu, 0x1D7F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F8C4u;
label_1d7f8c4:
    // 0x1d7f8c4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D7F8C4u;
    {
        const bool branch_taken_0x1d7f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F8C4u;
        // 0x1d7f8c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f8c4) {
            ctx->pc = 0x1D7F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f898;
        }
    }
    ctx->pc = 0x1D7F8CCu;
    // 0x1d7f8cc: 0x0  nop
    ctx->pc = 0x1d7f8ccu;
    // NOP
label_1d7f8d0:
    // 0x1d7f8d0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d7f8d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d7f8d4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D7F8D4u;
    {
        const bool branch_taken_0x1d7f8d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F8D4u;
        // 0x1d7f8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f8d4) {
            ctx->pc = 0x1D7F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f898;
        }
    }
    ctx->pc = 0x1D7F8DCu;
    // 0x1d7f8dc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d7f8dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d7f8e0: 0x3c0e01d8  lui         $t6, 0x1D8
    ctx->pc = 0x1d7f8e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
    // 0x1d7f8e4: 0x25ce4310  addiu       $t6, $t6, 0x4310
    ctx->pc = 0x1d7f8e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17168));
    // 0x1d7f8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f8ec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7f8ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d7f8f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f8f4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7f8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d7f8f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7f8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f8fc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7f900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f904: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7f904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f908: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F908u;
    SET_GPR_U32(ctx, 31, 0x1D7F910u);
    ctx->pc = 0x1D7F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F908u;
    // 0x1d7f90c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F908u, 0x1D7F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F910u;
label_1d7f910:
    // 0x1d7f910: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f910u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f914: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D7F914u;
    {
        const bool branch_taken_0x1d7f914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F914u;
        // 0x1d7f918: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f914) {
            ctx->pc = 0x1D7F894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f894;
        }
    }
    ctx->pc = 0x1D7F91Cu;
    // 0x1d7f91c: 0x0  nop
    ctx->pc = 0x1d7f91cu;
    // NOP
    // 0x1d7f920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f924: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7f924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7f928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7f92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f93c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7f93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f940: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7f940u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f944: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F944u;
    SET_GPR_U32(ctx, 31, 0x1D7F94Cu);
    ctx->pc = 0x1D7F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F944u;
    // 0x1d7f948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F944u, 0x1D7F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F94Cu;
label_1d7f94c:
    // 0x1d7f94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f950: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7F950u;
    SET_GPR_U32(ctx, 31, 0x1D7F958u);
    ctx->pc = 0x1D7F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F950u;
    // 0x1d7f954: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7F950u, 0x1D7F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F958u;
label_1d7f958:
    // 0x1d7f958: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d7f958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d7f95c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f964: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F964u;
        // 0x1d7f968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F96Cu;
    // 0x1d7f96c: 0x0  nop
    ctx->pc = 0x1d7f96cu;
    // NOP
    ctx->pc = 0x1d7f970u;
}
