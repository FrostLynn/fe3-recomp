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

// Function: sub_01DEB390
// Address: 0x1deb390 - 0x1deb400
void sub_01DEB390_0x1deb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB390_0x1deb390");
#endif

    switch (ctx->pc) {
        case 0x1deb3a0u: goto label_1deb3a0;
        case 0x1deb3b0u: goto label_1deb3b0;
        default: break;
    }

    ctx->pc = 0x1deb390u;

    // 0x1deb390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb398: 0xc77ac1c  jal         func_1DEB070
    ctx->pc = 0x1DEB398u;
    SET_GPR_U32(ctx, 31, 0x1DEB3A0u);
    ctx->pc = 0x1DEB070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB070u, 0x1DEB398u, 0x1DEB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB3A0u;
label_1deb3a0:
    // 0x1deb3a0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb3a4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1deb3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1deb3a8: 0xc77abc6  jal         func_1DEAF18
    ctx->pc = 0x1DEB3A8u;
    SET_GPR_U32(ctx, 31, 0x1DEB3B0u);
    ctx->pc = 0x1DEB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB3A8u;
    // 0x1deb3ac: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF18u, 0x1DEB3A8u, 0x1DEB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB3B0u;
label_1deb3b0:
    // 0x1deb3b0: 0x8c4f0248  lw          $t7, 0x248($v0)
    ctx->pc = 0x1deb3b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x1deb3b4: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1deb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1deb3b8: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1deb3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb3bc: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1deb3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1deb3c0: 0x8dee4868  lw          $t6, 0x4868($t7)
    ctx->pc = 0x1deb3c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18536)));
    // 0x1deb3c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1deb3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1deb3c8: 0x8ded4864  lw          $t5, 0x4864($t7)
    ctx->pc = 0x1deb3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1deb3cc: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x1deb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
    // 0x1deb3d0: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1deb3d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1deb3d4: 0x8dae0480  lw          $t6, 0x480($t5)
    ctx->pc = 0x1deb3d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1152)));
    // 0x1deb3d8: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEB3D8u;
    {
        const bool branch_taken_0x1deb3d8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DEB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB3D8u;
        // 0x1deb3dc: 0x2408fffe  addiu       $t0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb3d8) {
            ctx->pc = 0x1DEB3F0u;
            goto label_1deb3f0;
        }
    }
    ctx->pc = 0x1DEB3E0u;
    // 0x1deb3e0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1deb3e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1deb3e4: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB3E4u;
    {
        const bool branch_taken_0x1deb3e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DEB3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB3E4u;
        // 0x1deb3e8: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb3e4) {
            ctx->pc = 0x1DEB3F0u;
            goto label_1deb3f0;
        }
    }
    ctx->pc = 0x1DEB3ECu;
    // 0x1deb3ec: 0xadaf0480  sw          $t7, 0x480($t5)
    ctx->pc = 0x1deb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1152), GPR_U32(ctx, 15));
label_1deb3f0:
    // 0x1deb3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb3f4: 0x877abd6  j           func_1DEAF58
    ctx->pc = 0x1DEB3F4u;
    ctx->pc = 0x1DEB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB3F4u;
    // 0x1deb3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF58u;
    sub_01DEAF58_0x1deaf58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DEB3FCu;
    // 0x1deb3fc: 0x0  nop
    ctx->pc = 0x1deb3fcu;
    // NOP
    ctx->pc = 0x1deb400u;
}
