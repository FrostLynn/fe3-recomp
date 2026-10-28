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

// Function: sub_01D5DCB0
// Address: 0x1d5dcb0 - 0x1d5dd20
void sub_01D5DCB0_0x1d5dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5DCB0_0x1d5dcb0");
#endif

    switch (ctx->pc) {
        case 0x1d5dcd4u: goto label_1d5dcd4;
        case 0x1d5dce4u: goto label_1d5dce4;
        case 0x1d5dcf0u: goto label_1d5dcf0;
        case 0x1d5dd00u: goto label_1d5dd00;
        default: break;
    }

    ctx->pc = 0x1d5dcb0u;

    // 0x1d5dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5dcb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5dcb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5dcbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5dcc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5dcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dcc4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5dcc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5dcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dccc: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DCCCu;
    SET_GPR_U32(ctx, 31, 0x1D5DCD4u);
    ctx->pc = 0x1D5DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DCCCu;
    // 0x1d5dcd0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DCCCu, 0x1D5DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DCD4u;
label_1d5dcd4:
    // 0x1d5dcd4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d5dcd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d5dcd8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d5dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d5dcdc: 0xc7575f2  jal         func_1D5D7C8
    ctx->pc = 0x1D5DCDCu;
    SET_GPR_U32(ctx, 31, 0x1D5DCE4u);
    ctx->pc = 0x1D5DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DCDCu;
    // 0x1d5dce0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D7C8u, 0x1D5DCDCu, 0x1D5DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DCE4u;
label_1d5dce4:
    // 0x1d5dce4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5dce8: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DCE8u;
    SET_GPR_U32(ctx, 31, 0x1D5DCF0u);
    ctx->pc = 0x1D5DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DCE8u;
    // 0x1d5dcec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DCE8u, 0x1D5DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DCF0u;
label_1d5dcf0:
    // 0x1d5dcf0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d5dcf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d5dcf4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d5dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d5dcf8: 0xc7575f2  jal         func_1D5D7C8
    ctx->pc = 0x1D5DCF8u;
    SET_GPR_U32(ctx, 31, 0x1D5DD00u);
    ctx->pc = 0x1D5DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DCF8u;
    // 0x1d5dcfc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D7C8u, 0x1D5DCF8u, 0x1D5DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DD00u;
label_1d5dd00:
    // 0x1d5dd00: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d5dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d5dd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5dd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d5dd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5dd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5dd10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5dd10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5dd14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5dd14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5dd18: 0x875736a  j           func_1D5CDA8
    ctx->pc = 0x1D5DD18u;
    ctx->pc = 0x1D5DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DD18u;
    // 0x1d5dd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CDA8u;
    sub_01D5CDA8_0x1d5cda8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5DD20u;
}
