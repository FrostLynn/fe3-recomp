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

// Function: sub_01CDD1B0
// Address: 0x1cdd1b0 - 0x1cdd228
void sub_01CDD1B0_0x1cdd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD1B0_0x1cdd1b0");
#endif

    switch (ctx->pc) {
        case 0x1cdd1d0u: goto label_1cdd1d0;
        case 0x1cdd1e0u: goto label_1cdd1e0;
        default: break;
    }

    ctx->pc = 0x1cdd1b0u;

    // 0x1cdd1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdd1b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdd1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdd1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd1bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdd1c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdd1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd1c4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdd1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdd1c8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDD1C8u;
    SET_GPR_U32(ctx, 31, 0x1CDD1D0u);
    ctx->pc = 0x1CDD1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD1C8u;
    // 0x1cdd1cc: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDD1C8u, 0x1CDD1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD1D0u;
label_1cdd1d0:
    // 0x1cdd1d0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1cdd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdd1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdd1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd1d8: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDD1D8u;
    SET_GPR_U32(ctx, 31, 0x1CDD1E0u);
    ctx->pc = 0x1CDD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD1D8u;
    // 0x1cdd1dc: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDD1D8u, 0x1CDD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD1E0u;
label_1cdd1e0:
    // 0x1cdd1e0: 0x8e0f081c  lw          $t7, 0x81C($s0)
    ctx->pc = 0x1cdd1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1cdd1e4: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd1ec: 0x29ef0080  slti        $t7, $t7, 0x80
    ctx->pc = 0x1cdd1ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1cdd1f0: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDD1F0u;
    {
        const bool branch_taken_0x1cdd1f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD1F0u;
        // 0x1cdd1f4: 0x24a5e960  addiu       $a1, $a1, -0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd1f0) {
            ctx->pc = 0x1CDD210u;
            goto label_1cdd210;
        }
    }
    ctx->pc = 0x1CDD1F8u;
    // 0x1cdd1f8: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1cdd1f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1cdd1fc: 0x29ef0040  slti        $t7, $t7, 0x40
    ctx->pc = 0x1cdd1fcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1cdd200: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDD200u;
    {
        const bool branch_taken_0x1cdd200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD200u;
        // 0x1cdd204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd200) {
            ctx->pc = 0x1CDD214u;
            goto label_1cdd214;
        }
    }
    ctx->pc = 0x1CDD208u;
    // 0x1cdd208: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd20c: 0x24a53920  addiu       $a1, $a1, 0x3920
    ctx->pc = 0x1cdd20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14624));
label_1cdd210:
    // 0x1cdd210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd214:
    // 0x1cdd214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdd214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdd218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd21c: 0x8736c88  j           func_1CDB220
    ctx->pc = 0x1CDD21Cu;
    ctx->pc = 0x1CDD220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD21Cu;
    // 0x1cdd220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB220u;
    sub_01CDB220_0x1cdb220(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD224u;
    // 0x1cdd224: 0x0  nop
    ctx->pc = 0x1cdd224u;
    // NOP
    ctx->pc = 0x1cdd228u;
}
