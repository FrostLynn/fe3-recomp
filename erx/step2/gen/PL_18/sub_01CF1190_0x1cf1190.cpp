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

// Function: sub_01CF1190
// Address: 0x1cf1190 - 0x1cf1218
void sub_01CF1190_0x1cf1190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1190_0x1cf1190");
#endif

    switch (ctx->pc) {
        case 0x1cf11acu: goto label_1cf11ac;
        case 0x1cf11e4u: goto label_1cf11e4;
        case 0x1cf11f8u: goto label_1cf11f8;
        default: break;
    }

    ctx->pc = 0x1cf1190u;

    // 0x1cf1190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf119c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf119cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf11a0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cf11a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf11a4: 0xc73bd5a  jal         func_1CEF568
    ctx->pc = 0x1CF11A4u;
    SET_GPR_U32(ctx, 31, 0x1CF11ACu);
    ctx->pc = 0x1CF11A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF11A4u;
    // 0x1cf11a8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF568u, 0x1CF11A4u, 0x1CF11ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF11ACu;
label_1cf11ac:
    // 0x1cf11ac: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cf11acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf11b0: 0x25effff5  addiu       $t7, $t7, -0xB
    ctx->pc = 0x1cf11b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967285));
    // 0x1cf11b4: 0x2dee0013  sltiu       $t6, $t7, 0x13
    ctx->pc = 0x1cf11b4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1cf11b8: 0x11c0001f  beqz        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CF11B8u;
    {
        const bool branch_taken_0x1cf11b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF11B8u;
        // 0x1cf11bc: 0x3c0e01cf  lui         $t6, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf11b8) {
            ctx->pc = 0x1CF1238u;
            return;
        }
    }
    ctx->pc = 0x1CF11C0u;
    // 0x1cf11c0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cf11c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cf11c4: 0x25ce2f50  addiu       $t6, $t6, 0x2F50
    ctx->pc = 0x1cf11c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12112));
    // 0x1cf11c8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf11c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf11cc: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cf11ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf11d0: 0x1a00008  jr          $t5
    ctx->pc = 0x1CF11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF11D8u: goto label_1cf11d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF11D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CF11D8u;
label_1cf11d8:
    // 0x1cf11d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf11d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf11dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf11dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf11e0: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1cf11e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1cf11e4:
    // 0x1cf11e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf11e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf11e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf11e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf11ec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf11ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf11f0: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF11F0u;
    SET_GPR_U32(ctx, 31, 0x1CF11F8u);
    ctx->pc = 0x1CF11F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF11F0u;
    // 0x1cf11f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF11F0u, 0x1CF11F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF11F8u;
label_1cf11f8:
    // 0x1cf11f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf11f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf11fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf11fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1204: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x1cf1204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x1cf1208: 0x240600d9  addiu       $a2, $zero, 0xD9
    ctx->pc = 0x1cf1208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x1cf120c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf120cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1210: 0x873c02c  j           func_1CF00B0
    ctx->pc = 0x1CF1210u;
    ctx->pc = 0x1CF1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1210u;
    // 0x1cf1214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF00B0u;
    sub_01CF00B0_0x1cf00b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1218u;
}
