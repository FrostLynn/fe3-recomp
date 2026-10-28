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

// Function: sub_01CF1BF8
// Address: 0x1cf1bf8 - 0x1cf1ce0
void sub_01CF1BF8_0x1cf1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1BF8_0x1cf1bf8");
#endif

    switch (ctx->pc) {
        case 0x1cf1c24u: goto label_1cf1c24;
        case 0x1cf1c34u: goto label_1cf1c34;
        case 0x1cf1c40u: goto label_1cf1c40;
        case 0x1cf1c50u: goto label_1cf1c50;
        case 0x1cf1c60u: goto label_1cf1c60;
        case 0x1cf1c68u: goto label_1cf1c68;
        case 0x1cf1c7cu: goto label_1cf1c7c;
        case 0x1cf1c84u: goto label_1cf1c84;
        case 0x1cf1c88u: goto label_1cf1c88;
        case 0x1cf1cb4u: goto label_1cf1cb4;
        case 0x1cf1cc0u: goto label_1cf1cc0;
        default: break;
    }

    ctx->pc = 0x1cf1bf8u;

    // 0x1cf1bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1c00: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CF1C00u;
    {
        const bool branch_taken_0x1cf1c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C00u;
        // 0x1cf1c04: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c00) {
            ctx->pc = 0x1CF1B80u;
            return;
        }
    }
    ctx->pc = 0x1CF1C08u;
    // 0x1cf1c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1c0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1c14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf1c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1c1c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1C1Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1C24u);
    ctx->pc = 0x1CF1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C1Cu;
    // 0x1cf1c20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1C1Cu, 0x1CF1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C24u;
label_1cf1c24:
    // 0x1cf1c24: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf1c24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf1c28: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf1c2c: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF1C2Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1C34u);
    ctx->pc = 0x1CF1C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C2Cu;
    // 0x1cf1c30: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF1C2Cu, 0x1CF1C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C34u;
label_1cf1c34:
    // 0x1cf1c34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf1c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf1c38: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1C38u;
    SET_GPR_U32(ctx, 31, 0x1CF1C40u);
    ctx->pc = 0x1CF1C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C38u;
    // 0x1cf1c3c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1C38u, 0x1CF1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C40u;
label_1cf1c40:
    // 0x1cf1c40: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf1c40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf1c44: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf1c48: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF1C48u;
    SET_GPR_U32(ctx, 31, 0x1CF1C50u);
    ctx->pc = 0x1CF1C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C48u;
    // 0x1cf1c4c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF1C48u, 0x1CF1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C50u;
label_1cf1c50:
    // 0x1cf1c50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf1c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf1c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1c58: 0xc73bd52  jal         func_1CEF548
    ctx->pc = 0x1CF1C58u;
    SET_GPR_U32(ctx, 31, 0x1CF1C60u);
    ctx->pc = 0x1CF1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C58u;
    // 0x1cf1c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF548u, 0x1CF1C58u, 0x1CF1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C60u;
label_1cf1c60:
    // 0x1cf1c60: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF1C60u;
    SET_GPR_U32(ctx, 31, 0x1CF1C68u);
    ctx->pc = 0x1CF1C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C60u;
    // 0x1cf1c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF1C60u, 0x1CF1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C68u;
label_1cf1c68:
    // 0x1cf1c68: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf1c68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1c6c: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF1C6Cu;
    {
        const bool branch_taken_0x1cf1c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C6Cu;
        // 0x1cf1c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c6c) {
            ctx->pc = 0x1CF1C98u;
            goto label_1cf1c98;
        }
    }
    ctx->pc = 0x1CF1C74u;
    // 0x1cf1c74: 0xc73bd6e  jal         func_1CEF5B8
    ctx->pc = 0x1CF1C74u;
    SET_GPR_U32(ctx, 31, 0x1CF1C7Cu);
    ctx->pc = 0x1CEF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5B8u, 0x1CF1C74u, 0x1CF1C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C7Cu;
label_1cf1c7c:
    // 0x1cf1c7c: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF1C7Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1C84u);
    ctx->pc = 0x1CF1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C7Cu;
    // 0x1cf1c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF1C7Cu, 0x1CF1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C84u;
label_1cf1c84:
    // 0x1cf1c84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf1c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf1c88:
    // 0x1cf1c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1c8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C90u;
        // 0x1cf1c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1C98u;
label_1cf1c98:
    // 0x1cf1c98: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF1C98u;
    {
        const bool branch_taken_0x1cf1c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C98u;
        // 0x1cf1c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c98) {
            ctx->pc = 0x1CF1C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf1c88;
        }
    }
    ctx->pc = 0x1CF1CA0u;
    // 0x1cf1ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1cac: 0xc73bd62  jal         func_1CEF588
    ctx->pc = 0x1CF1CACu;
    SET_GPR_U32(ctx, 31, 0x1CF1CB4u);
    ctx->pc = 0x1CF1CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1CACu;
    // 0x1cf1cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF588u, 0x1CF1CACu, 0x1CF1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1CB4u;
label_1cf1cb4:
    // 0x1cf1cb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1cb8: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1CB8u;
    SET_GPR_U32(ctx, 31, 0x1CF1CC0u);
    ctx->pc = 0x1CF1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1CB8u;
    // 0x1cf1cbc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1CB8u, 0x1CF1CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1CC0u;
label_1cf1cc0:
    // 0x1cf1cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1cc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1cc8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf1cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1cd0: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1cf1cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cf1cd4: 0x873c00c  j           func_1CF0030
    ctx->pc = 0x1CF1CD4u;
    ctx->pc = 0x1CF1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1CD4u;
    // 0x1cf1cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0030u;
    sub_01CF0030_0x1cf0030(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1CDCu;
    // 0x1cf1cdc: 0x0  nop
    ctx->pc = 0x1cf1cdcu;
    // NOP
    ctx->pc = 0x1cf1ce0u;
}
