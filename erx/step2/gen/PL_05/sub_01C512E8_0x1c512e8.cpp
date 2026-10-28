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

// Function: sub_01C512E8
// Address: 0x1c512e8 - 0x1c51380
void sub_01C512E8_0x1c512e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C512E8_0x1c512e8");
#endif

    switch (ctx->pc) {
        case 0x1c5130cu: goto label_1c5130c;
        default: break;
    }

    ctx->pc = 0x1c512e8u;

    // 0x1c512e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c512e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c512ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c512ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c512f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c512f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c512f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c512f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c512f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c512f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c512fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c512fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51300: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c51300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c51304: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51304u;
    SET_GPR_U32(ctx, 31, 0x1C5130Cu);
    ctx->pc = 0x1C51308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51304u;
    // 0x1c51308: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51304u, 0x1C5130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5130Cu;
label_1c5130c:
    // 0x1c5130c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1c5130cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c51310: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c51310u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c51314: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c51314u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c51318: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c51318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c5131c: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c5131cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c51320: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1c51320u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c51324: 0x8c4a004c  lw          $t2, 0x4C($v0)
    ctx->pc = 0x1c51324u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c51328: 0xae2e05b0  sw          $t6, 0x5B0($s1)
    ctx->pc = 0x1c51328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 14));
    // 0x1c5132c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51330: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c51330u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c51334: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1c51334u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c51338: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c51338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c5133c: 0x8d4e0084  lw          $t6, 0x84($t2)
    ctx->pc = 0x1c5133cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x1c51340: 0xae2d05b4  sw          $t5, 0x5B4($s1)
    ctx->pc = 0x1c51340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 13));
    // 0x1c51344: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1c51344u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1c51348: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1c51348u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c5134c: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1c5134cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1c51350: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1c51350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c51354: 0xae2d05b8  sw          $t5, 0x5B8($s1)
    ctx->pc = 0x1c51354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 13));
    // 0x1c51358: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1c51358u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1c5135c: 0xae2e05a0  sw          $t6, 0x5A0($s1)
    ctx->pc = 0x1c5135cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 14));
    // 0x1c51360: 0xae2f05a4  sw          $t7, 0x5A4($s1)
    ctx->pc = 0x1c51360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 15));
    // 0x1c51364: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x1c51364u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c51368: 0xae2f05bc  sw          $t7, 0x5BC($s1)
    ctx->pc = 0x1c51368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 15));
    // 0x1c5136c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5136cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c51370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51374: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51374u;
        // 0x1c51378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5137Cu;
    // 0x1c5137c: 0x0  nop
    ctx->pc = 0x1c5137cu;
    // NOP
    ctx->pc = 0x1c51380u;
}
