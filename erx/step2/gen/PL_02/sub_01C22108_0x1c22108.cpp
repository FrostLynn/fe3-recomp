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

// Function: sub_01C22108
// Address: 0x1c22108 - 0x1c22170
void sub_01C22108_0x1c22108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C22108_0x1c22108");
#endif

    switch (ctx->pc) {
        case 0x1c22124u: goto label_1c22124;
        case 0x1c22134u: goto label_1c22134;
        case 0x1c22140u: goto label_1c22140;
        case 0x1c22150u: goto label_1c22150;
        default: break;
    }

    ctx->pc = 0x1c22108u;

    // 0x1c22108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c22108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2210c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c2210cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c22110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c22110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c22114: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c22114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c22118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c22118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2211c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2211Cu;
    SET_GPR_U32(ctx, 31, 0x1C22124u);
    ctx->pc = 0x1C22120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2211Cu;
    // 0x1c22120: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2211Cu, 0x1C22124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22124u;
label_1c22124:
    // 0x1c22124: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c22124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c22128: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c22128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c2212c: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C2212Cu;
    SET_GPR_U32(ctx, 31, 0x1C22134u);
    ctx->pc = 0x1C22130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2212Cu;
    // 0x1c22130: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C2212Cu, 0x1C22134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22134u;
label_1c22134:
    // 0x1c22134: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c22134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c22138: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C22138u;
    SET_GPR_U32(ctx, 31, 0x1C22140u);
    ctx->pc = 0x1C2213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22138u;
    // 0x1c2213c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C22138u, 0x1C22140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22140u;
label_1c22140:
    // 0x1c22140: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c22140u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c22144: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c22144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c22148: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C22148u;
    SET_GPR_U32(ctx, 31, 0x1C22150u);
    ctx->pc = 0x1C2214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22148u;
    // 0x1c2214c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C22148u, 0x1C22150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22150u;
label_1c22150:
    // 0x1c22150: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c22150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c22154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c22154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22158: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c22158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c2215c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c22160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c22160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c22164: 0x24a58f70  addiu       $a1, $a1, -0x7090
    ctx->pc = 0x1c22164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938480));
    // 0x1c22168: 0x8707c6e  j           func_1C1F1B8
    ctx->pc = 0x1C22168u;
    ctx->pc = 0x1C2216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22168u;
    // 0x1c2216c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B8u;
    sub_01C1F1B8_0x1c1f1b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C22170u;
}
