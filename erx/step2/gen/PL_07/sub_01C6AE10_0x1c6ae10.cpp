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

// Function: sub_01C6AE10
// Address: 0x1c6ae10 - 0x1c6ae80
void sub_01C6AE10_0x1c6ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6AE10_0x1c6ae10");
#endif

    switch (ctx->pc) {
        case 0x1c6ae34u: goto label_1c6ae34;
        case 0x1c6ae44u: goto label_1c6ae44;
        case 0x1c6ae50u: goto label_1c6ae50;
        case 0x1c6ae60u: goto label_1c6ae60;
        default: break;
    }

    ctx->pc = 0x1c6ae10u;

    // 0x1c6ae10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6ae14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6ae18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6ae1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ae20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6ae20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae24: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6ae28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ae28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae2c: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AE2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AE34u);
    ctx->pc = 0x1C6AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE2Cu;
    // 0x1c6ae30: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AE2Cu, 0x1C6AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AE34u;
label_1c6ae34:
    // 0x1c6ae34: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c6ae34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c6ae38: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c6ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c6ae3c: 0xc71aa4a  jal         func_1C6A928
    ctx->pc = 0x1C6AE3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AE44u);
    ctx->pc = 0x1C6AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE3Cu;
    // 0x1c6ae40: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A928u, 0x1C6AE3Cu, 0x1C6AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AE44u;
label_1c6ae44:
    // 0x1c6ae44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6ae48: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AE48u;
    SET_GPR_U32(ctx, 31, 0x1C6AE50u);
    ctx->pc = 0x1C6AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE48u;
    // 0x1c6ae4c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AE48u, 0x1C6AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AE50u;
label_1c6ae50:
    // 0x1c6ae50: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c6ae50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c6ae54: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c6ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c6ae58: 0xc71aa4a  jal         func_1C6A928
    ctx->pc = 0x1C6AE58u;
    SET_GPR_U32(ctx, 31, 0x1C6AE60u);
    ctx->pc = 0x1C6AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE58u;
    // 0x1c6ae5c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A928u, 0x1C6AE58u, 0x1C6AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AE60u;
label_1c6ae60:
    // 0x1c6ae60: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c6ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c6ae64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6ae68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ae70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6ae70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ae74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6ae74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ae78: 0x871a7ac  j           func_1C69EB0
    ctx->pc = 0x1C6AE78u;
    ctx->pc = 0x1C6AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE78u;
    // 0x1c6ae7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EB0u;
    sub_01C69EB0_0x1c69eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6AE80u;
}
