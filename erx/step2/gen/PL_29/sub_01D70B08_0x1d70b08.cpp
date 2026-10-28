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

// Function: sub_01D70B08
// Address: 0x1d70b08 - 0x1d70bd0
void sub_01D70B08_0x1d70b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70B08_0x1d70b08");
#endif

    switch (ctx->pc) {
        case 0x1d70b1cu: goto label_1d70b1c;
        case 0x1d70b30u: goto label_1d70b30;
        case 0x1d70b34u: goto label_1d70b34;
        case 0x1d70b6cu: goto label_1d70b6c;
        case 0x1d70ba8u: goto label_1d70ba8;
        case 0x1d70bb4u: goto label_1d70bb4;
        default: break;
    }

    ctx->pc = 0x1d70b08u;

    // 0x1d70b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70b10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70b14: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D70B14u;
    SET_GPR_U32(ctx, 31, 0x1D70B1Cu);
    ctx->pc = 0x1D70B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70B14u;
    // 0x1d70b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D70B14u, 0x1D70B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70B1Cu;
label_1d70b1c:
    // 0x1d70b1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d70b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70b20: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D70B20u;
    {
        const bool branch_taken_0x1d70b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D70B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B20u;
        // 0x1d70b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b20) {
            ctx->pc = 0x1D70B44u;
            goto label_1d70b44;
        }
    }
    ctx->pc = 0x1D70B28u;
    // 0x1d70b28: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D70B28u;
    SET_GPR_U32(ctx, 31, 0x1D70B30u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D70B28u, 0x1D70B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70B30u;
label_1d70b30:
    // 0x1d70b30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d70b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d70b34:
    // 0x1d70b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70b38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B3Cu;
        // 0x1d70b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70B44u;
label_1d70b44:
    // 0x1d70b44: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D70B44u;
    {
        const bool branch_taken_0x1d70b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B44u;
        // 0x1d70b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b44) {
            ctx->pc = 0x1D70B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d70b34;
        }
    }
    ctx->pc = 0x1D70B4Cu;
    // 0x1d70b4c: 0x0  nop
    ctx->pc = 0x1d70b4cu;
    // NOP
    // 0x1d70b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d70b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b60: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d70b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d70b64: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D70B64u;
    SET_GPR_U32(ctx, 31, 0x1D70B6Cu);
    ctx->pc = 0x1D70B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70B64u;
    // 0x1d70b68: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D70B64u, 0x1D70B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70B6Cu;
label_1d70b6c:
    // 0x1d70b6c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d70b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d70b70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d70b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d70b74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d70b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70b78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d70b78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b7c: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1d70b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d70b80: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d70b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d70b84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d70b84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70b8c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1d70b8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d70b90: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1d70b90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d70b94: 0x91cf1276  lbu         $t7, 0x1276($t6)
    ctx->pc = 0x1d70b94u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4726)));
    // 0x1d70b98: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D70B98u;
    {
        const bool branch_taken_0x1d70b98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B98u;
        // 0x1d70b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b98) {
            ctx->pc = 0x1D70BACu;
            goto label_1d70bac;
        }
    }
    ctx->pc = 0x1D70BA0u;
    // 0x1d70ba0: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D70BA0u;
    SET_GPR_U32(ctx, 31, 0x1D70BA8u);
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D70BA0u, 0x1D70BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70BA8u;
label_1d70ba8:
    // 0x1d70ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d70bac:
    // 0x1d70bac: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D70BACu;
    SET_GPR_U32(ctx, 31, 0x1D70BB4u);
    ctx->pc = 0x1D70BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70BACu;
    // 0x1d70bb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D70BACu, 0x1D70BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70BB4u;
label_1d70bb4:
    // 0x1d70bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70bc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70bc8: 0x875c006  j           func_1D70018
    ctx->pc = 0x1D70BC8u;
    ctx->pc = 0x1D70BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70BC8u;
    // 0x1d70bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    sub_01D70018_0x1d70018(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70BD0u;
}
