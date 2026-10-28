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

// Function: sub_01CF107C
// Address: 0x1cf107c - 0x1cf10e8
void sub_01CF107C_0x1cf107c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF107C_0x1cf107c");
#endif

    switch (ctx->pc) {
        case 0x1cf108cu: goto label_1cf108c;
        case 0x1cf109cu: goto label_1cf109c;
        case 0x1cf10acu: goto label_1cf10ac;
        case 0x1cf10d4u: goto label_1cf10d4;
        default: break;
    }

    ctx->pc = 0x1cf107cu;

    // 0x1cf107c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1084: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF1084u;
    {
        const bool branch_taken_0x1cf1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1084u;
        // 0x1cf1088: 0x24060165  addiu       $a2, $zero, 0x165 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1084) {
            ctx->pc = 0x1CF1048u;
            return;
        }
    }
    ctx->pc = 0x1CF108Cu;
label_1cf108c:
    // 0x1cf108c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1094: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CF1094u;
    {
        const bool branch_taken_0x1cf1094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1094u;
        // 0x1cf1098: 0x2406016f  addiu       $a2, $zero, 0x16F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1094) {
            ctx->pc = 0x1CF1048u;
            return;
        }
    }
    ctx->pc = 0x1CF109Cu;
label_1cf109c:
    // 0x1cf109c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf10a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf10a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf10a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CF10A4u;
    {
        const bool branch_taken_0x1cf10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF10A4u;
        // 0x1cf10a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf10a4) {
            ctx->pc = 0x1CF1048u;
            return;
        }
    }
    ctx->pc = 0x1CF10ACu;
label_1cf10ac:
    // 0x1cf10ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf10acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf10b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf10b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf10b4: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CF10B4u;
    {
        const bool branch_taken_0x1cf10b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF10B4u;
        // 0x1cf10b8: 0x24060195  addiu       $a2, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf10b4) {
            ctx->pc = 0x1CF1048u;
            return;
        }
    }
    ctx->pc = 0x1CF10BCu;
    // 0x1cf10bc: 0x0  nop
    ctx->pc = 0x1cf10bcu;
    // NOP
    // 0x1cf10c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf10c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf10c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf10c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf10c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf10c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf10cc: 0xc73bd6e  jal         func_1CEF5B8
    ctx->pc = 0x1CF10CCu;
    SET_GPR_U32(ctx, 31, 0x1CF10D4u);
    ctx->pc = 0x1CF10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF10CCu;
    // 0x1cf10d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5B8u, 0x1CF10CCu, 0x1CF10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF10D4u;
label_1cf10d4:
    // 0x1cf10d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf10d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf10d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf10dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf10dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf10e0: 0x873c05a  j           func_1CF0168
    ctx->pc = 0x1CF10E0u;
    ctx->pc = 0x1CF10E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF10E0u;
    // 0x1cf10e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0168u;
    sub_01CF0168_0x1cf0168(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF10E8u;
}
