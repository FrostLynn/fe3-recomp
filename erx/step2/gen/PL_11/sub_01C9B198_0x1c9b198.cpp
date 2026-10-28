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

// Function: sub_01C9B198
// Address: 0x1c9b198 - 0x1c9b210
void sub_01C9B198_0x1c9b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B198_0x1c9b198");
#endif

    switch (ctx->pc) {
        case 0x1c9b1b4u: goto label_1c9b1b4;
        case 0x1c9b1c0u: goto label_1c9b1c0;
        case 0x1c9b1ccu: goto label_1c9b1cc;
        case 0x1c9b1d4u: goto label_1c9b1d4;
        case 0x1c9b1e4u: goto label_1c9b1e4;
        default: break;
    }

    ctx->pc = 0x1c9b198u;

    // 0x1c9b198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9b19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9b1a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9b1a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9b1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b1ac: 0xc7262e0  jal         func_1C98B80
    ctx->pc = 0x1C9B1ACu;
    SET_GPR_U32(ctx, 31, 0x1C9B1B4u);
    ctx->pc = 0x1C9B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B1ACu;
    // 0x1c9b1b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B80u, 0x1C9B1ACu, 0x1C9B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B1B4u;
label_1c9b1b4:
    // 0x1c9b1b4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1c9b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c9b1b8: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B1B8u;
    SET_GPR_U32(ctx, 31, 0x1C9B1C0u);
    ctx->pc = 0x1C9B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B1B8u;
    // 0x1c9b1bc: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B1B8u, 0x1C9B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B1C0u;
label_1c9b1c0:
    // 0x1c9b1c0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9b1c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b1c4: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c9b1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c9b1c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1c9b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c9b1cc:
    // 0x1c9b1cc: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B1CCu;
    SET_GPR_U32(ctx, 31, 0x1C9B1D4u);
    ctx->pc = 0x1C9B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B1CCu;
    // 0x1c9b1d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B1CCu, 0x1C9B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B1D4u;
label_1c9b1d4:
    // 0x1c9b1d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9B1D4u;
    {
        const bool branch_taken_0x1c9b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B1D4u;
        // 0x1c9b1d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b1d4) {
            ctx->pc = 0x1C9B1E8u;
            goto label_1c9b1e8;
        }
    }
    ctx->pc = 0x1C9B1DCu;
    // 0x1c9b1dc: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B1DCu;
    SET_GPR_U32(ctx, 31, 0x1C9B1E4u);
    ctx->pc = 0x1C9B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B1DCu;
    // 0x1c9b1e0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B1DCu, 0x1C9B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B1E4u;
label_1c9b1e4:
    // 0x1c9b1e4: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1c9b1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1c9b1e8:
    // 0x1c9b1e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9b1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c9b1ec: 0x2a0f0003  slti        $t7, $s0, 0x3
    ctx->pc = 0x1c9b1ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c9b1f0: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C9B1F0u;
    {
        const bool branch_taken_0x1c9b1f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b1f0) {
            ctx->pc = 0x1C9B1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9B1F0u;
            // 0x1c9b1f4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b1cc;
        }
    }
    ctx->pc = 0x1C9B1F8u;
    // 0x1c9b1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b1fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b204: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B204u;
        // 0x1c9b208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B20Cu;
    // 0x1c9b20c: 0x0  nop
    ctx->pc = 0x1c9b20cu;
    // NOP
    ctx->pc = 0x1c9b210u;
}
