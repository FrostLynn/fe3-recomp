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

// Function: sub_01D94F00
// Address: 0x1d94f00 - 0x1d94f68
void sub_01D94F00_0x1d94f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94F00_0x1d94f00");
#endif

    switch (ctx->pc) {
        case 0x1d94f1cu: goto label_1d94f1c;
        case 0x1d94f2cu: goto label_1d94f2c;
        case 0x1d94f38u: goto label_1d94f38;
        case 0x1d94f48u: goto label_1d94f48;
        default: break;
    }

    ctx->pc = 0x1d94f00u;

    // 0x1d94f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94f04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94f0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d94f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94f14: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94F14u;
    SET_GPR_U32(ctx, 31, 0x1D94F1Cu);
    ctx->pc = 0x1D94F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94F14u;
    // 0x1d94f18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94F14u, 0x1D94F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94F1Cu;
label_1d94f1c:
    // 0x1d94f1c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d94f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d94f20: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d94f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d94f24: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D94F24u;
    SET_GPR_U32(ctx, 31, 0x1D94F2Cu);
    ctx->pc = 0x1D94F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94F24u;
    // 0x1d94f28: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D94F24u, 0x1D94F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94F2Cu;
label_1d94f2c:
    // 0x1d94f2c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d94f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94f30: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94F30u;
    SET_GPR_U32(ctx, 31, 0x1D94F38u);
    ctx->pc = 0x1D94F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94F30u;
    // 0x1d94f34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94F30u, 0x1D94F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94F38u;
label_1d94f38:
    // 0x1d94f38: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d94f38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d94f3c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d94f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d94f40: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D94F40u;
    SET_GPR_U32(ctx, 31, 0x1D94F48u);
    ctx->pc = 0x1D94F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94F40u;
    // 0x1d94f44: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D94F40u, 0x1D94F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94F48u;
label_1d94f48:
    // 0x1d94f48: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d94f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d94f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94f50: 0x3c0501d9  lui         $a1, 0x1D9
    ctx->pc = 0x1d94f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)473 << 16));
    // 0x1d94f54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94f5c: 0x24a55b90  addiu       $a1, $a1, 0x5B90
    ctx->pc = 0x1d94f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23440));
    // 0x1d94f60: 0x8764a2a  j           func_1D928A8
    ctx->pc = 0x1D94F60u;
    ctx->pc = 0x1D94F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94F60u;
    // 0x1d94f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D928A8u;
    sub_01D928A8_0x1d928a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D94F68u;
}
