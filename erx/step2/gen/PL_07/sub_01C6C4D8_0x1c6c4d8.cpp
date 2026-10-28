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

// Function: sub_01C6C4D8
// Address: 0x1c6c4d8 - 0x1c6c538
void sub_01C6C4D8_0x1c6c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C4D8_0x1c6c4d8");
#endif

    switch (ctx->pc) {
        case 0x1c6c4f8u: goto label_1c6c4f8;
        case 0x1c6c504u: goto label_1c6c504;
        default: break;
    }

    ctx->pc = 0x1c6c4d8u;

    // 0x1c6c4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6c4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6c4dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6c4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c4e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6c4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c4ec: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6c4f0: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6C4F0u;
    SET_GPR_U32(ctx, 31, 0x1C6C4F8u);
    ctx->pc = 0x1C6C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C4F0u;
    // 0x1c6c4f4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6C4F0u, 0x1C6C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C4F8u;
label_1c6c4f8:
    // 0x1c6c4f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6c4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c4fc: 0xc71aba0  jal         func_1C6AE80
    ctx->pc = 0x1C6C4FCu;
    SET_GPR_U32(ctx, 31, 0x1C6C504u);
    ctx->pc = 0x1C6C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C4FCu;
    // 0x1c6c500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AE80u, 0x1C6C4FCu, 0x1C6C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C504u;
label_1c6c504:
    // 0x1c6c504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6c504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c50c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6c50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c510: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c6c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6c514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6c514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c518: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6c518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6c51c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c524: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6c524u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c528: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6c528u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c52c: 0x871aa34  j           func_1C6A8D0
    ctx->pc = 0x1C6C52Cu;
    ctx->pc = 0x1C6C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C52Cu;
    // 0x1c6c530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8D0u;
    sub_01C6A8D0_0x1c6a8d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C534u;
    // 0x1c6c534: 0x0  nop
    ctx->pc = 0x1c6c534u;
    // NOP
    ctx->pc = 0x1c6c538u;
}
