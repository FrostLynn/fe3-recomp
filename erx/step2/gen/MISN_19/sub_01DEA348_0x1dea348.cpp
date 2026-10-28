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

// Function: sub_01DEA348
// Address: 0x1dea348 - 0x1dea3d0
void sub_01DEA348_0x1dea348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA348_0x1dea348");
#endif

    switch (ctx->pc) {
        case 0x1dea360u: goto label_1dea360;
        case 0x1dea3acu: goto label_1dea3ac;
        default: break;
    }

    ctx->pc = 0x1dea348u;

    // 0x1dea348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dea348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dea34c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea34cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dea350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dea354: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dea354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dea358: 0xc77a806  jal         func_1DEA018
    ctx->pc = 0x1DEA358u;
    SET_GPR_U32(ctx, 31, 0x1DEA360u);
    ctx->pc = 0x1DEA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA358u;
    // 0x1dea35c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA018u, 0x1DEA358u, 0x1DEA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA360u;
label_1dea360:
    // 0x1dea360: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dea360u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dea364: 0x240f014c  addiu       $t7, $zero, 0x14C
    ctx->pc = 0x1dea364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x1dea368: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEA368u;
    {
        const bool branch_taken_0x1dea368 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DEA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA368u;
        // 0x1dea36c: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea368) {
            ctx->pc = 0x1DEA37Cu;
            goto label_1dea37c;
        }
    }
    ctx->pc = 0x1DEA370u;
    // 0x1dea370: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dea370u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dea374: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1dea374u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1dea378: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dea378u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dea37c:
    // 0x1dea37c: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1dea37cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dea380: 0xc5e108d8  lwc1        $f1, 0x8D8($t7)
    ctx->pc = 0x1dea380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dea384: 0x3c0f01df  lui         $t7, 0x1DF
    ctx->pc = 0x1dea384u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)479 << 16));
    // 0x1dea388: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dea388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dea38c: 0x25efaea0  addiu       $t7, $t7, -0x5160
    ctx->pc = 0x1dea38cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294946464));
    // 0x1dea390: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1dea390u;
    { uint32_t bits = FAST_READ32(0x1DEAEA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dea394: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dea394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dea398: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEA398u;
    {
        const bool branch_taken_0x1dea398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DEA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA398u;
        // 0x1dea39c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea398) {
            ctx->pc = 0x1DEA3A4u;
            goto label_1dea3a4;
        }
    }
    ctx->pc = 0x1DEA3A0u;
    // 0x1dea3a0: 0xa1cf0428  sb          $t7, 0x428($t6)
    ctx->pc = 0x1dea3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dea3a4:
    // 0x1dea3a4: 0xc77a860  jal         func_1DEA180
    ctx->pc = 0x1DEA3A4u;
    SET_GPR_U32(ctx, 31, 0x1DEA3ACu);
    ctx->pc = 0x1DEA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA180u, 0x1DEA3A4u, 0x1DEA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA3ACu;
label_1dea3ac:
    // 0x1dea3ac: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dea3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea3b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dea3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dea3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dea3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea3b8: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dea3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dea3bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dea3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dea3c0: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dea3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dea3c4: 0x877a81a  j           func_1DEA068
    ctx->pc = 0x1DEA3C4u;
    ctx->pc = 0x1DEA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA3C4u;
    // 0x1dea3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA068u;
    sub_01DEA068_0x1dea068(rdram, ctx, runtime); return;
    ctx->pc = 0x1DEA3CCu;
    // 0x1dea3cc: 0x0  nop
    ctx->pc = 0x1dea3ccu;
    // NOP
    ctx->pc = 0x1dea3d0u;
}
