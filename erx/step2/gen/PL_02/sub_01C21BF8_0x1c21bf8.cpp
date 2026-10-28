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

// Function: sub_01C21BF8
// Address: 0x1c21bf8 - 0x1c21c60
void sub_01C21BF8_0x1c21bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21BF8_0x1c21bf8");
#endif

    switch (ctx->pc) {
        case 0x1c21c14u: goto label_1c21c14;
        case 0x1c21c24u: goto label_1c21c24;
        case 0x1c21c30u: goto label_1c21c30;
        case 0x1c21c40u: goto label_1c21c40;
        default: break;
    }

    ctx->pc = 0x1c21bf8u;

    // 0x1c21bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21bfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c21c00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21c04: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c21c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21c08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21c0c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C21C14u);
    ctx->pc = 0x1C21C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C0Cu;
    // 0x1c21c10: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21C0Cu, 0x1C21C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C14u;
label_1c21c14:
    // 0x1c21c14: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21c14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21c18: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21c1c: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C21C24u);
    ctx->pc = 0x1C21C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C1Cu;
    // 0x1c21c20: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21C1Cu, 0x1C21C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C24u;
label_1c21c24:
    // 0x1c21c24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c21c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c21c28: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21C28u;
    SET_GPR_U32(ctx, 31, 0x1C21C30u);
    ctx->pc = 0x1C21C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C28u;
    // 0x1c21c2c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21C28u, 0x1C21C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C30u;
label_1c21c30:
    // 0x1c21c30: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21c30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21c34: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21c38: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21C38u;
    SET_GPR_U32(ctx, 31, 0x1C21C40u);
    ctx->pc = 0x1C21C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C38u;
    // 0x1c21c3c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21C38u, 0x1C21C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C40u;
label_1c21c40:
    // 0x1c21c40: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c21c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c21c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21c48: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c21c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c21c4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c21c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c21c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c21c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21c54: 0x24a589d0  addiu       $a1, $a1, -0x7630
    ctx->pc = 0x1c21c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937040));
    // 0x1c21c58: 0x8707c6e  j           func_1C1F1B8
    ctx->pc = 0x1C21C58u;
    ctx->pc = 0x1C21C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C58u;
    // 0x1c21c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B8u;
    sub_01C1F1B8_0x1c1f1b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21C60u;
}
