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

// Function: sub_01D67D08
// Address: 0x1d67d08 - 0x1d67da0
void sub_01D67D08_0x1d67d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67D08_0x1d67d08");
#endif

    switch (ctx->pc) {
        case 0x1d67d24u: goto label_1d67d24;
        case 0x1d67d34u: goto label_1d67d34;
        case 0x1d67d40u: goto label_1d67d40;
        case 0x1d67d50u: goto label_1d67d50;
        case 0x1d67d64u: goto label_1d67d64;
        case 0x1d67d84u: goto label_1d67d84;
        default: break;
    }

    ctx->pc = 0x1d67d08u;

    // 0x1d67d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67d0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67d14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d67d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d67d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d1c: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D67D24u);
    ctx->pc = 0x1D67D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D1Cu;
    // 0x1d67d20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67D1Cu, 0x1D67D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67D24u;
label_1d67d24:
    // 0x1d67d24: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67d24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67d28: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67d2c: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D67D34u);
    ctx->pc = 0x1D67D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D2Cu;
    // 0x1d67d30: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67D2Cu, 0x1D67D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67D34u;
label_1d67d34:
    // 0x1d67d34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67d38: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67D38u;
    SET_GPR_U32(ctx, 31, 0x1D67D40u);
    ctx->pc = 0x1D67D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D38u;
    // 0x1d67d3c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67D38u, 0x1D67D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67D40u;
label_1d67d40:
    // 0x1d67d40: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67d40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67d44: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67d48: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67D48u;
    SET_GPR_U32(ctx, 31, 0x1D67D50u);
    ctx->pc = 0x1D67D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D48u;
    // 0x1d67d4c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67D48u, 0x1D67D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67D50u;
label_1d67d50:
    // 0x1d67d50: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d67d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d67d54: 0x3c0501d7  lui         $a1, 0x1D7
    ctx->pc = 0x1d67d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)471 << 16));
    // 0x1d67d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d5c: 0xc7599de  jal         func_1D66778
    ctx->pc = 0x1D67D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D67D64u);
    ctx->pc = 0x1D67D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D5Cu;
    // 0x1d67d60: 0x24a587d0  addiu       $a1, $a1, -0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66778u, 0x1D67D5Cu, 0x1D67D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67D64u;
label_1d67d64:
    // 0x1d67d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d67d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67d70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d78: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d67d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d67d7c: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D67D84u);
    ctx->pc = 0x1D67D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D7Cu;
    // 0x1d67d80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67D7Cu, 0x1D67D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67D84u;
label_1d67d84:
    // 0x1d67d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67d90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d67d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67d94: 0x87599d0  j           func_1D66740
    ctx->pc = 0x1D67D94u;
    ctx->pc = 0x1D67D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D94u;
    // 0x1d67d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    sub_01D66740_0x1d66740(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67D9Cu;
    // 0x1d67d9c: 0x0  nop
    ctx->pc = 0x1d67d9cu;
    // NOP
    ctx->pc = 0x1d67da0u;
}
