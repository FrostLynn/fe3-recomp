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

// Function: sub_01C00F50
// Address: 0x1c00f50 - 0x1c01018
void sub_01C00F50_0x1c00f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00F50_0x1c00f50");
#endif

    switch (ctx->pc) {
        case 0x1c00f6cu: goto label_1c00f6c;
        case 0x1c00f7cu: goto label_1c00f7c;
        case 0x1c00f88u: goto label_1c00f88;
        case 0x1c00f98u: goto label_1c00f98;
        case 0x1c00fb0u: goto label_1c00fb0;
        case 0x1c00fdcu: goto label_1c00fdc;
        default: break;
    }

    ctx->pc = 0x1c00f50u;

    // 0x1c00f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00f54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c00f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c00f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00f5c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c00f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c00f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c00f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00f64: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00F64u;
    SET_GPR_U32(ctx, 31, 0x1C00F6Cu);
    ctx->pc = 0x1C00F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F64u;
    // 0x1c00f68: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00F64u, 0x1C00F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00F6Cu;
label_1c00f6c:
    // 0x1c00f6c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c00f6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c00f70: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c00f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c00f74: 0xc7002cc  jal         func_1C00B30
    ctx->pc = 0x1C00F74u;
    SET_GPR_U32(ctx, 31, 0x1C00F7Cu);
    ctx->pc = 0x1C00F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F74u;
    // 0x1c00f78: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00B30u, 0x1C00F74u, 0x1C00F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00F7Cu;
label_1c00f7c:
    // 0x1c00f7c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c00f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c00f80: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00F80u;
    SET_GPR_U32(ctx, 31, 0x1C00F88u);
    ctx->pc = 0x1C00F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F80u;
    // 0x1c00f84: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00F80u, 0x1C00F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00F88u;
label_1c00f88:
    // 0x1c00f88: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c00f88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c00f8c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c00f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c00f90: 0xc7002cc  jal         func_1C00B30
    ctx->pc = 0x1C00F90u;
    SET_GPR_U32(ctx, 31, 0x1C00F98u);
    ctx->pc = 0x1C00F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F90u;
    // 0x1c00f94: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00B30u, 0x1C00F90u, 0x1C00F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00F98u;
label_1c00f98:
    // 0x1c00f98: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c00f98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c00f9c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C00F9Cu;
    {
        const bool branch_taken_0x1c00f9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c00f9c) {
            ctx->pc = 0x1C00FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C00F9Cu;
            // 0x1c00fa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C01004u;
            goto label_1c01004;
        }
    }
    ctx->pc = 0x1C00FA4u;
    // 0x1c00fa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c00fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c00fa8: 0xc70002a  jal         func_1C000A8
    ctx->pc = 0x1C00FA8u;
    SET_GPR_U32(ctx, 31, 0x1C00FB0u);
    ctx->pc = 0x1C00FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00FA8u;
    // 0x1c00fac: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C000A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C000A8u, 0x1C00FA8u, 0x1C00FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00FB0u;
label_1c00fb0:
    // 0x1c00fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c00fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00fb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c00fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c00fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c00fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00fc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c00fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00fc4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c00fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c00fc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c00fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c00fcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C00FCCu;
    {
        const bool branch_taken_0x1c00fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00FCCu;
        // 0x1c00fd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00fcc) {
            ctx->pc = 0x1C01000u;
            goto label_1c01000;
        }
    }
    ctx->pc = 0x1C00FD4u;
    // 0x1c00fd4: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C00FD4u;
    SET_GPR_U32(ctx, 31, 0x1C00FDCu);
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C00FD4u, 0x1C00FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00FDCu;
label_1c00fdc:
    // 0x1c00fdc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c00fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00fe0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c00fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c00fe4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c00fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c00fe8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c00fe8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c00fec: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c00fecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c00ff0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C00FF0u;
    {
        const bool branch_taken_0x1c00ff0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C00FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00FF0u;
        // 0x1c00ff4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00ff0) {
            ctx->pc = 0x1C01004u;
            goto label_1c01004;
        }
    }
    ctx->pc = 0x1C00FF8u;
    // 0x1c00ff8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c00ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c00ffc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c00ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c01000:
    // 0x1c01000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c01004:
    // 0x1c01004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c01004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c01008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0100c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100Cu;
        // 0x1c01010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01014u;
    // 0x1c01014: 0x0  nop
    ctx->pc = 0x1c01014u;
    // NOP
    ctx->pc = 0x1c01018u;
}
