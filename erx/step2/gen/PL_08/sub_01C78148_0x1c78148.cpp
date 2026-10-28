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

// Function: sub_01C78148
// Address: 0x1c78148 - 0x1c781a8
void sub_01C78148_0x1c78148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78148_0x1c78148");
#endif

    switch (ctx->pc) {
        case 0x1c78168u: goto label_1c78168;
        case 0x1c78174u: goto label_1c78174;
        default: break;
    }

    ctx->pc = 0x1c78148u;

    // 0x1c78148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c78148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7814c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c78150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c78154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c78158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7815c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c7815cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c78160: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C78160u;
    SET_GPR_U32(ctx, 31, 0x1C78168u);
    ctx->pc = 0x1C78164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78160u;
    // 0x1c78164: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C78160u, 0x1C78168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78168u;
label_1c78168:
    // 0x1c78168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c78168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7816c: 0xc71da54  jal         func_1C76950
    ctx->pc = 0x1C7816Cu;
    SET_GPR_U32(ctx, 31, 0x1C78174u);
    ctx->pc = 0x1C78170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7816Cu;
    // 0x1c78170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C76950u, 0x1C7816Cu, 0x1C78174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78174u;
label_1c78174:
    // 0x1c78174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c78174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7817c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7817cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78180: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c78180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c78184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c78188: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c78188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7818c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7818cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c78190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c78194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78198: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7819c: 0x871d8e4  j           func_1C76390
    ctx->pc = 0x1C7819Cu;
    ctx->pc = 0x1C781A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7819Cu;
    // 0x1c781a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76390u;
    sub_01C76390_0x1c76390(rdram, ctx, runtime); return;
    ctx->pc = 0x1C781A4u;
    // 0x1c781a4: 0x0  nop
    ctx->pc = 0x1c781a4u;
    // NOP
    ctx->pc = 0x1c781a8u;
}
