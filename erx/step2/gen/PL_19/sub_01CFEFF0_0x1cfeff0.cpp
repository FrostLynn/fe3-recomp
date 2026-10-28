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

// Function: sub_01CFEFF0
// Address: 0x1cfeff0 - 0x1cff040
void sub_01CFEFF0_0x1cfeff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEFF0_0x1cfeff0");
#endif

    switch (ctx->pc) {
        case 0x1cff01cu: goto label_1cff01c;
        default: break;
    }

    ctx->pc = 0x1cfeff0u;

    // 0x1cfeff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfeff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfeff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfeff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeff8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfeff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfeffc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cfeffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff004: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cff004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff00c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff00cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff010: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cff010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cff014: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF014u;
    SET_GPR_U32(ctx, 31, 0x1CFF01Cu);
    ctx->pc = 0x1CFF018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF014u;
    // 0x1cff018: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF014u, 0x1CFF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF01Cu;
label_1cff01c:
    // 0x1cff01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff028: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1cff028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cff02c: 0x240600e1  addiu       $a2, $zero, 0xE1
    ctx->pc = 0x1cff02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x1cff030: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cff030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff034: 0x873f776  j           func_1CFDDD8
    ctx->pc = 0x1CFF034u;
    ctx->pc = 0x1CFF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF034u;
    // 0x1cff038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDDD8u;
    sub_01CFDDD8_0x1cfddd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFF03Cu;
    // 0x1cff03c: 0x0  nop
    ctx->pc = 0x1cff03cu;
    // NOP
    ctx->pc = 0x1cff040u;
}
