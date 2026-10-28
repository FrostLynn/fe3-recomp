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

// Function: sub_01DD9948
// Address: 0x1dd9948 - 0x1dd99c0
void sub_01DD9948_0x1dd9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9948_0x1dd9948");
#endif

    switch (ctx->pc) {
        case 0x1dd9964u: goto label_1dd9964;
        case 0x1dd9980u: goto label_1dd9980;
        default: break;
    }

    ctx->pc = 0x1dd9948u;

    // 0x1dd9948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd994c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd994cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd9950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd9954: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd9954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd9958: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd9958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd995c: 0xc776586  jal         func_1DD9618
    ctx->pc = 0x1DD995Cu;
    SET_GPR_U32(ctx, 31, 0x1DD9964u);
    ctx->pc = 0x1DD9960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD995Cu;
    // 0x1dd9960: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9618u, 0x1DD995Cu, 0x1DD9964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9964u;
label_1dd9964:
    // 0x1dd9964: 0x8c4e0010  lw          $t6, 0x10($v0)
    ctx->pc = 0x1dd9964u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd9968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd996c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd996cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9970: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD9970u;
    {
        const bool branch_taken_0x1dd9970 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9970u;
        // 0x1dd9974: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9970) {
            ctx->pc = 0x1DD9980u;
            goto label_1dd9980;
        }
    }
    ctx->pc = 0x1DD9978u;
    // 0x1dd9978: 0xc77663e  jal         func_1DD98F8
    ctx->pc = 0x1DD9978u;
    SET_GPR_U32(ctx, 31, 0x1DD9980u);
    ctx->pc = 0x1DD98F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD98F8u, 0x1DD9978u, 0x1DD9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9980u;
label_1dd9980:
    // 0x1dd9980: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9980u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9984: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dd9984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9988: 0x8e0d081c  lw          $t5, 0x81C($s0)
    ctx->pc = 0x1dd9988u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1dd998c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd998cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9990: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dd9990u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd9994: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x1dd9994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9998: 0xaf8d8020  sw          $t5, -0x7FE0($gp)
    ctx->pc = 0x1dd9998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 13));
    // 0x1dd999c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd99a0: 0x8dcf08dc  lw          $t7, 0x8DC($t6)
    ctx->pc = 0x1dd99a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 2268)));
    // 0x1dd99a4: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd99a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd99a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd99a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd99ac: 0xaf8f8024  sw          $t7, -0x7FDC($gp)
    ctx->pc = 0x1dd99acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934564), GPR_U32(ctx, 15));
    // 0x1dd99b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd99b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd99b4: 0x877659a  j           func_1DD9668
    ctx->pc = 0x1DD99B4u;
    ctx->pc = 0x1DD99B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD99B4u;
    // 0x1dd99b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9668u;
    sub_01DD9668_0x1dd9668(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD99BCu;
    // 0x1dd99bc: 0x0  nop
    ctx->pc = 0x1dd99bcu;
    // NOP
    ctx->pc = 0x1dd99c0u;
}
