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

// Function: sub_01DEA088
// Address: 0x1dea088 - 0x1dea180
void sub_01DEA088_0x1dea088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA088_0x1dea088");
#endif

    switch (ctx->pc) {
        case 0x1dea0c4u: goto label_1dea0c4;
        case 0x1dea0d8u: goto label_1dea0d8;
        case 0x1dea0ecu: goto label_1dea0ec;
        case 0x1dea100u: goto label_1dea100;
        case 0x1dea124u: goto label_1dea124;
        case 0x1dea140u: goto label_1dea140;
        default: break;
    }

    ctx->pc = 0x1dea088u;

    // 0x1dea088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dea088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dea08c: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dea08cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dea090: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dea090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dea094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dea094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dea098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dea098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dea09c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dea09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dea0a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dea0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dea0a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dea0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dea0a8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DEA0A8u;
    {
        const bool branch_taken_0x1dea0a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA0A8u;
        // 0x1dea0ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea0a8) {
            ctx->pc = 0x1DEA130u;
            goto label_1dea130;
        }
    }
    ctx->pc = 0x1DEA0B0u;
    // 0x1dea0b0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea0b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea0b4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dea0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dea0b8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dea0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dea0bc: 0xc77a808  jal         func_1DEA020
    ctx->pc = 0x1DEA0BCu;
    SET_GPR_U32(ctx, 31, 0x1DEA0C4u);
    ctx->pc = 0x1DEA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA0BCu;
    // 0x1dea0c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA020u, 0x1DEA0BCu, 0x1DEA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA0C4u;
label_1dea0c4:
    // 0x1dea0c4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea0c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dea0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea0cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dea0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea0d0: 0xc77a80a  jal         func_1DEA028
    ctx->pc = 0x1DEA0D0u;
    SET_GPR_U32(ctx, 31, 0x1DEA0D8u);
    ctx->pc = 0x1DEA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA0D0u;
    // 0x1dea0d4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA028u, 0x1DEA0D0u, 0x1DEA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA0D8u;
label_1dea0d8:
    // 0x1dea0d8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea0dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dea0dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea0e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dea0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea0e4: 0xc77a80c  jal         func_1DEA030
    ctx->pc = 0x1DEA0E4u;
    SET_GPR_U32(ctx, 31, 0x1DEA0ECu);
    ctx->pc = 0x1DEA0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA0E4u;
    // 0x1dea0e8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA030u, 0x1DEA0E4u, 0x1DEA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA0ECu;
label_1dea0ec:
    // 0x1dea0ec: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea0ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea0f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dea0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dea0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea0f8: 0xc77a80e  jal         func_1DEA038
    ctx->pc = 0x1DEA0F8u;
    SET_GPR_U32(ctx, 31, 0x1DEA100u);
    ctx->pc = 0x1DEA0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA0F8u;
    // 0x1dea0fc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA038u, 0x1DEA0F8u, 0x1DEA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA100u;
label_1dea100:
    // 0x1dea100: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea100u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea104: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dea104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea108: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dea108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea10c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dea10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea110: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dea110u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dea114: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dea114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea118: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dea118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea11c: 0xc77a810  jal         func_1DEA040
    ctx->pc = 0x1DEA11Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA124u);
    ctx->pc = 0x1DEA120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA11Cu;
    // 0x1dea120: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA040u, 0x1DEA11Cu, 0x1DEA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA124u;
label_1dea124:
    // 0x1dea124: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dea124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dea128: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dea128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dea12c: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dea12cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dea130:
    // 0x1dea130: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea130u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea134: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dea134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dea138: 0xc77a812  jal         func_1DEA048
    ctx->pc = 0x1DEA138u;
    SET_GPR_U32(ctx, 31, 0x1DEA140u);
    ctx->pc = 0x1DEA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA138u;
    // 0x1dea13c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA048u, 0x1DEA138u, 0x1DEA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA140u;
label_1dea140:
    // 0x1dea140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dea140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dea144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dea144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dea148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEA148u;
    {
        const bool branch_taken_0x1dea148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA148u;
        // 0x1dea14c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea148) {
            ctx->pc = 0x1DEA158u;
            goto label_1dea158;
        }
    }
    ctx->pc = 0x1DEA150u;
    // 0x1dea150: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dea150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dea154: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dea154u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dea158:
    // 0x1dea158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dea158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea15c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dea15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dea160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dea164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dea164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dea168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dea16c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dea16cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dea170: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dea170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dea174: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA174u;
        // 0x1dea178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA17Cu;
    // 0x1dea17c: 0x0  nop
    ctx->pc = 0x1dea17cu;
    // NOP
    ctx->pc = 0x1dea180u;
}
