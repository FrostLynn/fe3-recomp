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

// Function: sub_01C20140
// Address: 0x1c20140 - 0x1c201b0
void sub_01C20140_0x1c20140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20140_0x1c20140");
#endif

    switch (ctx->pc) {
        case 0x1c20164u: goto label_1c20164;
        case 0x1c20174u: goto label_1c20174;
        case 0x1c20180u: goto label_1c20180;
        case 0x1c20190u: goto label_1c20190;
        default: break;
    }

    ctx->pc = 0x1c20140u;

    // 0x1c20140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c20144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c20144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2014c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20150: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c20150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20154: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c20154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c20158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c20158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2015c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2015Cu;
    SET_GPR_U32(ctx, 31, 0x1C20164u);
    ctx->pc = 0x1C20160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2015Cu;
    // 0x1c20160: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2015Cu, 0x1C20164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20164u;
label_1c20164:
    // 0x1c20164: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c20164u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c20168: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c20168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c2016c: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C2016Cu;
    SET_GPR_U32(ctx, 31, 0x1C20174u);
    ctx->pc = 0x1C20170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2016Cu;
    // 0x1c20170: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C2016Cu, 0x1C20174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20174u;
label_1c20174:
    // 0x1c20174: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c20174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c20178: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20178u;
    SET_GPR_U32(ctx, 31, 0x1C20180u);
    ctx->pc = 0x1C2017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20178u;
    // 0x1c2017c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20178u, 0x1C20180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20180u;
label_1c20180:
    // 0x1c20180: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c20180u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c20184: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c20184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c20188: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C20188u;
    SET_GPR_U32(ctx, 31, 0x1C20190u);
    ctx->pc = 0x1C2018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20188u;
    // 0x1c2018c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C20188u, 0x1C20190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20190u;
label_1c20190:
    // 0x1c20190: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c20190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c20194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c20198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2019c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2019cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c201a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c201a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c201a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c201a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c201a8: 0x8707c6e  j           func_1C1F1B8
    ctx->pc = 0x1C201A8u;
    ctx->pc = 0x1C201ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C201A8u;
    // 0x1c201ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B8u;
    sub_01C1F1B8_0x1c1f1b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C201B0u;
}
