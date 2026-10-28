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

// Function: sub_01D3CBF8
// Address: 0x1d3cbf8 - 0x1d3cc68
void sub_01D3CBF8_0x1d3cbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3CBF8_0x1d3cbf8");
#endif

    switch (ctx->pc) {
        case 0x1d3cc1cu: goto label_1d3cc1c;
        case 0x1d3cc2cu: goto label_1d3cc2c;
        case 0x1d3cc38u: goto label_1d3cc38;
        case 0x1d3cc48u: goto label_1d3cc48;
        default: break;
    }

    ctx->pc = 0x1d3cbf8u;

    // 0x1d3cbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3cbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3cbfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3cbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3cc00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3cc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3cc08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3cc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cc0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3cc10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3cc10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cc14: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CC14u;
    SET_GPR_U32(ctx, 31, 0x1D3CC1Cu);
    ctx->pc = 0x1D3CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CC14u;
    // 0x1d3cc18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CC14u, 0x1D3CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CC1Cu;
label_1d3cc1c:
    // 0x1d3cc1c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3cc1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3cc20: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3cc24: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3CC24u;
    SET_GPR_U32(ctx, 31, 0x1D3CC2Cu);
    ctx->pc = 0x1D3CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CC24u;
    // 0x1d3cc28: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3CC24u, 0x1D3CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CC2Cu;
label_1d3cc2c:
    // 0x1d3cc2c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3cc30: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CC30u;
    SET_GPR_U32(ctx, 31, 0x1D3CC38u);
    ctx->pc = 0x1D3CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CC30u;
    // 0x1d3cc34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CC30u, 0x1D3CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CC38u;
label_1d3cc38:
    // 0x1d3cc38: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3cc38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3cc3c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3cc40: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3CC40u;
    SET_GPR_U32(ctx, 31, 0x1D3CC48u);
    ctx->pc = 0x1D3CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CC40u;
    // 0x1d3cc44: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3CC40u, 0x1D3CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CC48u;
label_1d3cc48:
    // 0x1d3cc48: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d3cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d3cc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3cc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cc50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3cc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cc54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3cc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3cc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3cc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3cc5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3cc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3cc60: 0x874ef2a  j           func_1D3BCA8
    ctx->pc = 0x1D3CC60u;
    ctx->pc = 0x1D3CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CC60u;
    // 0x1d3cc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BCA8u;
    sub_01D3BCA8_0x1d3bca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3CC68u;
}
