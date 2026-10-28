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

// Function: sub_01C9B3E0
// Address: 0x1c9b3e0 - 0x1c9b468
void sub_01C9B3E0_0x1c9b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B3E0_0x1c9b3e0");
#endif

    switch (ctx->pc) {
        case 0x1c9b400u: goto label_1c9b400;
        case 0x1c9b440u: goto label_1c9b440;
        case 0x1c9b450u: goto label_1c9b450;
        default: break;
    }

    ctx->pc = 0x1c9b3e0u;

    // 0x1c9b3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9b3e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b3e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9b3ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9b3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b3f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9b3f8: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C9B3F8u;
    SET_GPR_U32(ctx, 31, 0x1C9B400u);
    ctx->pc = 0x1C9B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B3F8u;
    // 0x1c9b3fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C9B3F8u, 0x1C9B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B400u;
label_1c9b400:
    // 0x1c9b400: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c9b400u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9b404: 0x240d008f  addiu       $t5, $zero, 0x8F
    ctx->pc = 0x1c9b404u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x1c9b408: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x1c9b408u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c9b40c: 0x240e00be  addiu       $t6, $zero, 0xBE
    ctx->pc = 0x1c9b40cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1c9b410: 0xc5e00058  lwc1        $f0, 0x58($t7)
    ctx->pc = 0x1c9b410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9b414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b418: 0x398c001e  xori        $t4, $t4, 0x1E
    ctx->pc = 0x1c9b418u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)30);
    // 0x1c9b41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b420: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9b420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c9b424: 0x1cc680a  movz        $t5, $t6, $t4
    ctx->pc = 0x1c9b424u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 14));
    // 0x1c9b428: 0x440f0800  mfc1        $t7, $f1
    ctx->pc = 0x1c9b428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1c9b42c: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x1c9b42cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1c9b430: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9B430u;
    {
        const bool branch_taken_0x1c9b430 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B430u;
        // 0x1c9b434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b430) {
            ctx->pc = 0x1C9B454u;
            goto label_1c9b454;
        }
    }
    ctx->pc = 0x1C9B438u;
    // 0x1c9b438: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9B438u;
    SET_GPR_U32(ctx, 31, 0x1C9B440u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9B438u, 0x1C9B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B440u;
label_1c9b440:
    // 0x1c9b440: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c9b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c9b444: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x1c9b444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x1c9b448: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C9B448u;
    SET_GPR_U32(ctx, 31, 0x1C9B450u);
    ctx->pc = 0x1C9B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B448u;
    // 0x1c9b44c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C9B448u, 0x1C9B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B450u;
label_1c9b450:
    // 0x1c9b450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9b454:
    // 0x1c9b454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b45c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9b45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b460: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B460u;
        // 0x1c9b464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B468u;
}
