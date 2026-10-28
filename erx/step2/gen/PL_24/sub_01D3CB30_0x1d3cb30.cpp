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

// Function: sub_01D3CB30
// Address: 0x1d3cb30 - 0x1d3cbf8
void sub_01D3CB30_0x1d3cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3CB30_0x1d3cb30");
#endif

    switch (ctx->pc) {
        case 0x1d3cb4cu: goto label_1d3cb4c;
        case 0x1d3cb5cu: goto label_1d3cb5c;
        case 0x1d3cb68u: goto label_1d3cb68;
        case 0x1d3cb78u: goto label_1d3cb78;
        case 0x1d3cb90u: goto label_1d3cb90;
        case 0x1d3cbbcu: goto label_1d3cbbc;
        default: break;
    }

    ctx->pc = 0x1d3cb30u;

    // 0x1d3cb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3cb34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3cb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3cb3c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3cb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3cb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3cb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cb44: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CB44u;
    SET_GPR_U32(ctx, 31, 0x1D3CB4Cu);
    ctx->pc = 0x1D3CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CB44u;
    // 0x1d3cb48: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CB44u, 0x1D3CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB4Cu;
label_1d3cb4c:
    // 0x1d3cb4c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3cb4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3cb50: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3cb54: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3CB54u;
    SET_GPR_U32(ctx, 31, 0x1D3CB5Cu);
    ctx->pc = 0x1D3CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CB54u;
    // 0x1d3cb58: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3CB54u, 0x1D3CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB5Cu;
label_1d3cb5c:
    // 0x1d3cb5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3cb60: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CB60u;
    SET_GPR_U32(ctx, 31, 0x1D3CB68u);
    ctx->pc = 0x1D3CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CB60u;
    // 0x1d3cb64: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CB60u, 0x1D3CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB68u;
label_1d3cb68:
    // 0x1d3cb68: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3cb68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3cb6c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3cb70: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3CB70u;
    SET_GPR_U32(ctx, 31, 0x1D3CB78u);
    ctx->pc = 0x1D3CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CB70u;
    // 0x1d3cb74: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3CB70u, 0x1D3CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB78u;
label_1d3cb78:
    // 0x1d3cb78: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d3cb78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d3cb7c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3CB7Cu;
    {
        const bool branch_taken_0x1d3cb7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cb7c) {
            ctx->pc = 0x1D3CB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3CB7Cu;
            // 0x1d3cb80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3CBE4u;
            goto label_1d3cbe4;
        }
    }
    ctx->pc = 0x1D3CB84u;
    // 0x1d3cb84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3cb88: 0xc74ef28  jal         func_1D3BCA0
    ctx->pc = 0x1D3CB88u;
    SET_GPR_U32(ctx, 31, 0x1D3CB90u);
    ctx->pc = 0x1D3CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CB88u;
    // 0x1d3cb8c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BCA0u, 0x1D3CB88u, 0x1D3CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB90u;
label_1d3cb90:
    // 0x1d3cb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3cb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3cb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cb98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3cb9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3cb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3cba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cba4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3cba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3cba8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d3cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d3cbac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3CBACu;
    {
        const bool branch_taken_0x1d3cbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CBACu;
        // 0x1d3cbb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cbac) {
            ctx->pc = 0x1D3CBE0u;
            goto label_1d3cbe0;
        }
    }
    ctx->pc = 0x1D3CBB4u;
    // 0x1d3cbb4: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3CBB4u;
    SET_GPR_U32(ctx, 31, 0x1D3CBBCu);
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3CBB4u, 0x1D3CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CBBCu;
label_1d3cbbc:
    // 0x1d3cbbc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3cbbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3cbc0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d3cbc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3cbc4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d3cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d3cbc8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d3cbc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d3cbcc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d3cbccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3cbd0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3CBD0u;
    {
        const bool branch_taken_0x1d3cbd0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CBD0u;
        // 0x1d3cbd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cbd0) {
            ctx->pc = 0x1D3CBE4u;
            goto label_1d3cbe4;
        }
    }
    ctx->pc = 0x1D3CBD8u;
    // 0x1d3cbd8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d3cbd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3cbdc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d3cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d3cbe0:
    // 0x1d3cbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3cbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3cbe4:
    // 0x1d3cbe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3cbe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cbe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3cbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3cbec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3CBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CBECu;
        // 0x1d3cbf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3CBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3CBF4u;
    // 0x1d3cbf4: 0x0  nop
    ctx->pc = 0x1d3cbf4u;
    // NOP
    ctx->pc = 0x1d3cbf8u;
}
