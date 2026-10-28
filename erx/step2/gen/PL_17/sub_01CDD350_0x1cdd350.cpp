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

// Function: sub_01CDD350
// Address: 0x1cdd350 - 0x1cdd3e8
void sub_01CDD350_0x1cdd350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD350_0x1cdd350");
#endif

    switch (ctx->pc) {
        case 0x1cdd378u: goto label_1cdd378;
        case 0x1cdd394u: goto label_1cdd394;
        case 0x1cdd3a4u: goto label_1cdd3a4;
        case 0x1cdd3c4u: goto label_1cdd3c4;
        default: break;
    }

    ctx->pc = 0x1cdd350u;

    // 0x1cdd350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdd350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdd354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdd354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdd358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdd358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdd35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdd360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd364: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdd364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdd368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cdd368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd36c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cdd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cdd370: 0xc7368a8  jal         func_1CDA2A0
    ctx->pc = 0x1CDD370u;
    SET_GPR_U32(ctx, 31, 0x1CDD378u);
    ctx->pc = 0x1CDD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD370u;
    // 0x1cdd374: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA2A0u, 0x1CDD370u, 0x1CDD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD378u;
label_1cdd378:
    // 0x1cdd378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cdd378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cdd37c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cdd37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cdd380: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CDD380u;
    {
        const bool branch_taken_0x1cdd380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD380u;
        // 0x1cdd384: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd380) {
            ctx->pc = 0x1CDD3C8u;
            goto label_1cdd3c8;
        }
    }
    ctx->pc = 0x1CDD388u;
    // 0x1cdd388: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1cdd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdd38c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDD38Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD394u);
    ctx->pc = 0x1CDD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD38Cu;
    // 0x1cdd390: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDD38Cu, 0x1CDD394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD394u;
label_1cdd394:
    // 0x1cdd394: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1cdd394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdd398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdd398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd39c: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDD39Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD3A4u);
    ctx->pc = 0x1CDD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD39Cu;
    // 0x1cdd3a0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDD39Cu, 0x1CDD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD3A4u;
label_1cdd3a4:
    // 0x1cdd3a4: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1cdd3a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cdd3a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cdd3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd3ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cdd3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd3b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cdd3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd3b4: 0x25440140  addiu       $a0, $t2, 0x140
    ctx->pc = 0x1cdd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    // 0x1cdd3b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdd3b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd3bc: 0xc736b48  jal         func_1CDAD20
    ctx->pc = 0x1CDD3BCu;
    SET_GPR_U32(ctx, 31, 0x1CDD3C4u);
    ctx->pc = 0x1CDD3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD3BCu;
    // 0x1cdd3c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD20u, 0x1CDD3BCu, 0x1CDD3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD3C4u;
label_1cdd3c4:
    // 0x1cdd3c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdd3c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdd3c8:
    // 0x1cdd3c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd3cc: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1cdd3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd3d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdd3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd3d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdd3d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd3d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdd3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdd3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD3DCu;
        // 0x1cdd3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD3E4u;
    // 0x1cdd3e4: 0x0  nop
    ctx->pc = 0x1cdd3e4u;
    // NOP
    ctx->pc = 0x1cdd3e8u;
}
