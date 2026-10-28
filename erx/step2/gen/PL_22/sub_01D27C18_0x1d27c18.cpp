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

// Function: sub_01D27C18
// Address: 0x1d27c18 - 0x1d27c88
void sub_01D27C18_0x1d27c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27C18_0x1d27c18");
#endif

    switch (ctx->pc) {
        case 0x1d27c3cu: goto label_1d27c3c;
        case 0x1d27c4cu: goto label_1d27c4c;
        case 0x1d27c58u: goto label_1d27c58;
        case 0x1d27c68u: goto label_1d27c68;
        default: break;
    }

    ctx->pc = 0x1d27c18u;

    // 0x1d27c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d27c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d27c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d27c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d27c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d27c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d27c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27c28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d27c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27c2c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d27c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27c34: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27C34u;
    SET_GPR_U32(ctx, 31, 0x1D27C3Cu);
    ctx->pc = 0x1D27C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C34u;
    // 0x1d27c38: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27C34u, 0x1D27C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27C3Cu;
label_1d27c3c:
    // 0x1d27c3c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d27c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d27c40: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d27c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d27c44: 0xc749dcc  jal         func_1D27730
    ctx->pc = 0x1D27C44u;
    SET_GPR_U32(ctx, 31, 0x1D27C4Cu);
    ctx->pc = 0x1D27C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C44u;
    // 0x1d27c48: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27730u, 0x1D27C44u, 0x1D27C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27C4Cu;
label_1d27c4c:
    // 0x1d27c4c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d27c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d27c50: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27C50u;
    SET_GPR_U32(ctx, 31, 0x1D27C58u);
    ctx->pc = 0x1D27C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C50u;
    // 0x1d27c54: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27C50u, 0x1D27C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27C58u;
label_1d27c58:
    // 0x1d27c58: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d27c58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d27c5c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d27c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d27c60: 0xc749dcc  jal         func_1D27730
    ctx->pc = 0x1D27C60u;
    SET_GPR_U32(ctx, 31, 0x1D27C68u);
    ctx->pc = 0x1D27C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C60u;
    // 0x1d27c64: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27730u, 0x1D27C60u, 0x1D27C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27C68u;
label_1d27c68:
    // 0x1d27c68: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d27c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d27c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27c70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d27c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d27c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d27c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27c80: 0x8749b2e  j           func_1D26CB8
    ctx->pc = 0x1D27C80u;
    ctx->pc = 0x1D27C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C80u;
    // 0x1d27c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CB8u;
    sub_01D26CB8_0x1d26cb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D27C88u;
}
