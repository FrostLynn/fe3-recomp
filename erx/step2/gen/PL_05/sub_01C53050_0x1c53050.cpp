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

// Function: sub_01C53050
// Address: 0x1c53050 - 0x1c53100
void sub_01C53050_0x1c53050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C53050_0x1c53050");
#endif

    ctx->pc = 0x1c53050u;

    // 0x1c53050: 0x240f0147  addiu       $t7, $zero, 0x147
    ctx->pc = 0x1c53050u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c53054: 0x248b0200  addiu       $t3, $a0, 0x200
    ctx->pc = 0x1c53054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1c53058: 0xac8f0d18  sw          $t7, 0xD18($a0)
    ctx->pc = 0x1c53058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 15));
    // 0x1c5305c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1c5305cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c53060: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1c53060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1c53064: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1c53064u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1c53068: 0x8d6d004c  lw          $t5, 0x4C($t3)
    ctx->pc = 0x1c53068u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 76)));
    // 0x1c5306c: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1c5306cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1c53070: 0x240e0149  addiu       $t6, $zero, 0x149
    ctx->pc = 0x1c53070u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1c53074: 0x25ad0070  addiu       $t5, $t5, 0x70
    ctx->pc = 0x1c53074u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x1c53078: 0xac8e0d1c  sw          $t6, 0xD1C($a0)
    ctx->pc = 0x1c53078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 14));
    // 0x1c5307c: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1c5307cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1c53080: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1c53080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1c53084: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c53084u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c53088: 0x25eff4b4  addiu       $t7, $t7, -0xB4C
    ctx->pc = 0x1c53088u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964404));
    // 0x1c5308c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c5308cu;
    { uint32_t bits = FAST_READ32(0x1C5F4B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c53090: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1c53090u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1c53094: 0xe5a04594  swc1        $f0, 0x4594($t5)
    ctx->pc = 0x1c53094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 17812), bits); }
    // 0x1c53098: 0xa1e06426  sb          $zero, 0x6426($t7)
    ctx->pc = 0x1c53098u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 25638), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5309c: 0x8d6e004c  lw          $t6, 0x4C($t3)
    ctx->pc = 0x1c5309cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 76)));
    // 0x1c530a0: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1c530a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c530a4: 0xa1e067b6  sb          $zero, 0x67B6($t7)
    ctx->pc = 0x1c530a4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 26550), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c530a8: 0x8d6c0048  lw          $t4, 0x48($t3)
    ctx->pc = 0x1c530a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x1c530ac: 0x240f0024  addiu       $t7, $zero, 0x24
    ctx->pc = 0x1c530acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c530b0: 0x8d8d0044  lw          $t5, 0x44($t4)
    ctx->pc = 0x1c530b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c530b4: 0xad8f4930  sw          $t7, 0x4930($t4)
    ctx->pc = 0x1c530b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 18736), GPR_U32(ctx, 15));
    // 0x1c530b8: 0x8dae043c  lw          $t6, 0x43C($t5)
    ctx->pc = 0x1c530b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1084)));
    // 0x1c530bc: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x1c530bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c530c0: 0x55cf0005  bnel        $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C530C0u;
    {
        const bool branch_taken_0x1c530c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c530c0) {
            ctx->pc = 0x1C530C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C530C0u;
            // 0x1c530c4: 0x8d8f0044  lw          $t7, 0x44($t4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C530D8u;
            goto label_1c530d8;
        }
    }
    ctx->pc = 0x1C530C8u;
    // 0x1c530c8: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x1c530c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1c530cc: 0xa3808094  sb          $zero, -0x7F6C($gp)
    ctx->pc = 0x1c530ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934676), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c530d0: 0xac8f0d18  sw          $t7, 0xD18($a0)
    ctx->pc = 0x1c530d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 15));
    // 0x1c530d4: 0x8d8f0044  lw          $t7, 0x44($t4)
    ctx->pc = 0x1c530d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
label_1c530d8:
    // 0x1c530d8: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x1c530d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c530dc: 0x8ded043c  lw          $t5, 0x43C($t7)
    ctx->pc = 0x1c530dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1084)));
    // 0x1c530e0: 0x15ae0004  bne         $t5, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C530E0u;
    {
        const bool branch_taken_0x1c530e0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        if (branch_taken_0x1c530e0) {
            ctx->pc = 0x1C530F4u;
            goto label_1c530f4;
        }
    }
    ctx->pc = 0x1C530E8u;
    // 0x1c530e8: 0x8d6f004c  lw          $t7, 0x4C($t3)
    ctx->pc = 0x1c530e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 76)));
    // 0x1c530ec: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c530ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c530f0: 0xa1c04416  sb          $zero, 0x4416($t6)
    ctx->pc = 0x1c530f0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 17430), (uint8_t)GPR_U32(ctx, 0));
label_1c530f4:
    // 0x1c530f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C530F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C530F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C530FCu;
    // 0x1c530fc: 0x0  nop
    ctx->pc = 0x1c530fcu;
    // NOP
    ctx->pc = 0x1c53100u;
}
