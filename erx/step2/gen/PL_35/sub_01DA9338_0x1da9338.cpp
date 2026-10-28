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

// Function: sub_01DA9338
// Address: 0x1da9338 - 0x1da93d8
void sub_01DA9338_0x1da9338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9338_0x1da9338");
#endif

    switch (ctx->pc) {
        case 0x1da9380u: goto label_1da9380;
        case 0x1da9384u: goto label_1da9384;
        case 0x1da93a4u: goto label_1da93a4;
        case 0x1da93b8u: goto label_1da93b8;
        default: break;
    }

    ctx->pc = 0x1da9338u;

    // 0x1da9338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da9338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da933c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1da933cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da9340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da9344: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1da9344u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da9348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da934c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1da934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9350: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1da9350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9354: 0x240f0143  addiu       $t7, $zero, 0x143
    ctx->pc = 0x1da9354u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    // 0x1da9358: 0x11cf0014  beq         $t6, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA9358u;
    {
        const bool branch_taken_0x1da9358 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DA935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9358u;
        // 0x1da935c: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9358) {
            ctx->pc = 0x1DA93ACu;
            goto label_1da93ac;
        }
    }
    ctx->pc = 0x1DA9360u;
    // 0x1da9360: 0x240f0144  addiu       $t7, $zero, 0x144
    ctx->pc = 0x1da9360u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x1da9364: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA9364u;
    {
        const bool branch_taken_0x1da9364 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DA9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9364u;
        // 0x1da9368: 0x3c0401da  lui         $a0, 0x1DA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9364) {
            ctx->pc = 0x1DA9394u;
            goto label_1da9394;
        }
    }
    ctx->pc = 0x1DA936Cu;
    // 0x1da936c: 0x3c0501db  lui         $a1, 0x1DB
    ctx->pc = 0x1da936cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)475 << 16));
    // 0x1da9370: 0x24846ed0  addiu       $a0, $a0, 0x6ED0
    ctx->pc = 0x1da9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28368));
    // 0x1da9374: 0x24a59ea0  addiu       $a1, $a1, -0x6160
    ctx->pc = 0x1da9374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942368));
    // 0x1da9378: 0xc769bb6  jal         func_1DA6ED8
    ctx->pc = 0x1DA9378u;
    SET_GPR_U32(ctx, 31, 0x1DA9380u);
    ctx->pc = 0x1DA937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9378u;
    // 0x1da937c: 0x240602a0  addiu       $a2, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6ED8u, 0x1DA9378u, 0x1DA9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9380u;
label_1da9380:
    // 0x1da9380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da9380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da9384:
    // 0x1da9384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da9384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da9388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da938c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA938Cu;
        // 0x1da9390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9394u;
label_1da9394:
    // 0x1da9394: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1da9394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9398: 0x3c0601db  lui         $a2, 0x1DB
    ctx->pc = 0x1da9398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)475 << 16));
    // 0x1da939c: 0xc76a0b0  jal         func_1DA82C0
    ctx->pc = 0x1DA939Cu;
    SET_GPR_U32(ctx, 31, 0x1DA93A4u);
    ctx->pc = 0x1DA93A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA939Cu;
    // 0x1da93a0: 0x24c6cc50  addiu       $a2, $a2, -0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA82C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA82C0u, 0x1DA939Cu, 0x1DA93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA93A4u;
label_1da93a4:
    // 0x1da93a4: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DA93A4u;
    {
        const bool branch_taken_0x1da93a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA93A4u;
        // 0x1da93a8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da93a4) {
            ctx->pc = 0x1DA9384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9384;
        }
    }
    ctx->pc = 0x1DA93ACu;
label_1da93ac:
    // 0x1da93ac: 0x3c0601db  lui         $a2, 0x1DB
    ctx->pc = 0x1da93acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)475 << 16));
    // 0x1da93b0: 0xc769fa8  jal         func_1DA7EA0
    ctx->pc = 0x1DA93B0u;
    SET_GPR_U32(ctx, 31, 0x1DA93B8u);
    ctx->pc = 0x1DA93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA93B0u;
    // 0x1da93b4: 0x24c6cc20  addiu       $a2, $a2, -0x33E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA7EA0u, 0x1DA93B0u, 0x1DA93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA93B8u;
label_1da93b8:
    // 0x1da93b8: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da93b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da93bc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1da93bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da93c0: 0x25ef0e60  addiu       $t7, $t7, 0xE60
    ctx->pc = 0x1da93c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3680));
    // 0x1da93c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da93c8: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1da93c8u;
    { uint32_t bits = FAST_READ32(0x1DB0E60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da93cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1da93ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1da93d0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DA93D0u;
    {
        const bool branch_taken_0x1da93d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA93D0u;
        // 0x1da93d4: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da93d0) {
            ctx->pc = 0x1DA9384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9384;
        }
    }
    ctx->pc = 0x1DA93D8u;
}
