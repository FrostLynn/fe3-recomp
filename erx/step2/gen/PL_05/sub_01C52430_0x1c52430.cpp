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

// Function: sub_01C52430
// Address: 0x1c52430 - 0x1c52490
void sub_01C52430_0x1c52430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52430_0x1c52430");
#endif

    switch (ctx->pc) {
        case 0x1c52450u: goto label_1c52450;
        case 0x1c5245cu: goto label_1c5245c;
        default: break;
    }

    ctx->pc = 0x1c52430u;

    // 0x1c52430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c52430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c52434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c52434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c52438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5243c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c52440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c52440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52444: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c52444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c52448: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52448u;
    SET_GPR_U32(ctx, 31, 0x1C52450u);
    ctx->pc = 0x1C5244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52448u;
    // 0x1c5244c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52448u, 0x1C52450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52450u;
label_1c52450:
    // 0x1c52450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c52450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52454: 0xc714274  jal         func_1C509D0
    ctx->pc = 0x1C52454u;
    SET_GPR_U32(ctx, 31, 0x1C5245Cu);
    ctx->pc = 0x1C52458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52454u;
    // 0x1c52458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C509D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C509D0u, 0x1C52454u, 0x1C5245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5245Cu;
label_1c5245c:
    // 0x1c5245c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52468: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c52468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c5246c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5246cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52470: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c52470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c52474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c52474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c52478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5247c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c5247cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52480: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c52480u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52484: 0x87140f8  j           func_1C503E0
    ctx->pc = 0x1C52484u;
    ctx->pc = 0x1C52488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52484u;
    // 0x1c52488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503E0u;
    sub_01C503E0_0x1c503e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5248Cu;
    // 0x1c5248c: 0x0  nop
    ctx->pc = 0x1c5248cu;
    // NOP
    ctx->pc = 0x1c52490u;
}
