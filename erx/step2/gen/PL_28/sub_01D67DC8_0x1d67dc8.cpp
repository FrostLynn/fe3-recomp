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

// Function: sub_01D67DC8
// Address: 0x1d67dc8 - 0x1d67e30
void sub_01D67DC8_0x1d67dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67DC8_0x1d67dc8");
#endif

    switch (ctx->pc) {
        case 0x1d67de4u: goto label_1d67de4;
        case 0x1d67df4u: goto label_1d67df4;
        case 0x1d67e00u: goto label_1d67e00;
        case 0x1d67e10u: goto label_1d67e10;
        default: break;
    }

    ctx->pc = 0x1d67dc8u;

    // 0x1d67dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67dcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67dd4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d67dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d67dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67ddc: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67DDCu;
    SET_GPR_U32(ctx, 31, 0x1D67DE4u);
    ctx->pc = 0x1D67DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67DDCu;
    // 0x1d67de0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67DDCu, 0x1D67DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67DE4u;
label_1d67de4:
    // 0x1d67de4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67de4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67de8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67dec: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67DECu;
    SET_GPR_U32(ctx, 31, 0x1D67DF4u);
    ctx->pc = 0x1D67DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67DECu;
    // 0x1d67df0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67DECu, 0x1D67DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67DF4u;
label_1d67df4:
    // 0x1d67df4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67df8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67DF8u;
    SET_GPR_U32(ctx, 31, 0x1D67E00u);
    ctx->pc = 0x1D67DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67DF8u;
    // 0x1d67dfc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67DF8u, 0x1D67E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E00u;
label_1d67e00:
    // 0x1d67e00: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67e00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67e04: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67e08: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67E08u;
    SET_GPR_U32(ctx, 31, 0x1D67E10u);
    ctx->pc = 0x1D67E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E08u;
    // 0x1d67e0c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67E08u, 0x1D67E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E10u;
label_1d67e10:
    // 0x1d67e10: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d67e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d67e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e18: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d67e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d67e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67e28: 0x87599de  j           func_1D66778
    ctx->pc = 0x1D67E28u;
    ctx->pc = 0x1D67E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E28u;
    // 0x1d67e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66778u;
    sub_01D66778_0x1d66778(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67E30u;
}
