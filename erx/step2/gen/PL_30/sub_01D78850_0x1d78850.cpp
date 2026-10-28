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

// Function: sub_01D78850
// Address: 0x1d78850 - 0x1d78938
void sub_01D78850_0x1d78850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78850_0x1d78850");
#endif

    switch (ctx->pc) {
        case 0x1d78864u: goto label_1d78864;
        case 0x1d78878u: goto label_1d78878;
        case 0x1d7887cu: goto label_1d7887c;
        case 0x1d788b8u: goto label_1d788b8;
        case 0x1d788f4u: goto label_1d788f4;
        case 0x1d78918u: goto label_1d78918;
        default: break;
    }

    ctx->pc = 0x1d78850u;

    // 0x1d78850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d78850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d78854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d78858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7885c: 0xc75ded0  jal         func_1D77B40
    ctx->pc = 0x1D7885Cu;
    SET_GPR_U32(ctx, 31, 0x1D78864u);
    ctx->pc = 0x1D78860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7885Cu;
    // 0x1d78860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B40u, 0x1D7885Cu, 0x1D78864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78864u;
label_1d78864:
    // 0x1d78864: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d78864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78868: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D78868u;
    {
        const bool branch_taken_0x1d78868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78868u;
        // 0x1d7886c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78868) {
            ctx->pc = 0x1D7888Cu;
            goto label_1d7888c;
        }
    }
    ctx->pc = 0x1D78870u;
    // 0x1d78870: 0xc75ded2  jal         func_1D77B48
    ctx->pc = 0x1D78870u;
    SET_GPR_U32(ctx, 31, 0x1D78878u);
    ctx->pc = 0x1D77B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B48u, 0x1D78870u, 0x1D78878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78878u;
label_1d78878:
    // 0x1d78878: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7887c:
    // 0x1d7887c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7887cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d78880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d78884: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78884u;
        // 0x1d78888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7888Cu;
label_1d7888c:
    // 0x1d7888c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7888Cu;
    {
        const bool branch_taken_0x1d7888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7888Cu;
        // 0x1d78890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7888c) {
            ctx->pc = 0x1D7887Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7887c;
        }
    }
    ctx->pc = 0x1D78894u;
    // 0x1d78894: 0x0  nop
    ctx->pc = 0x1d78894u;
    // NOP
    // 0x1d78898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d78898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7889c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d788a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d788a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d788a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d788a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d788a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d788a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d788ac: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1d788acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d788b0: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D788B0u;
    SET_GPR_U32(ctx, 31, 0x1D788B8u);
    ctx->pc = 0x1D788B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D788B0u;
    // 0x1d788b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D788B0u, 0x1D788B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D788B8u;
label_1d788b8:
    // 0x1d788b8: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d788b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d788bc: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d788bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d788c0: 0x25efd5e8  addiu       $t7, $t7, -0x2A18
    ctx->pc = 0x1d788c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956520));
    // 0x1d788c4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1d788c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d788c8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d788c8u;
    { uint32_t bits = FAST_READ32(0x1D7D5E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d788cc: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1d788ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1d788d0: 0x0  nop
    ctx->pc = 0x1d788d0u;
    // NOP
    // 0x1d788d4: 0x0  nop
    ctx->pc = 0x1d788d4u;
    // NOP
    // 0x1d788d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d788d8u;
    { if (ps2_fclamp(ctx->f[0]) == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d788dc: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d788dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d788e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d788e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d788e4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1d788e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1d788e8: 0x2a0e0004  slti        $t6, $s0, 0x4
    ctx->pc = 0x1d788e8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d788ec: 0xc75e084  jal         func_1D78210
    ctx->pc = 0x1D788ECu;
    SET_GPR_U32(ctx, 31, 0x1D788F4u);
    ctx->pc = 0x1D788F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D788ECu;
    // 0x1d788f0: 0x1ee800a  movz        $s0, $t7, $t6 (Delay Slot)
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78210u, 0x1D788ECu, 0x1D788F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D788F4u;
label_1d788f4:
    // 0x1d788f4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1d788f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d788f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d788f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d788fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d788fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78900: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d78900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78904: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1d78904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1d78908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d78908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7890c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7890cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78910: 0xc75dee0  jal         func_1D77B80
    ctx->pc = 0x1D78910u;
    SET_GPR_U32(ctx, 31, 0x1D78918u);
    ctx->pc = 0x1D78914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78910u;
    // 0x1d78914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B80u, 0x1D78910u, 0x1D78918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78918u;
label_1d78918:
    // 0x1d78918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d78918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7891c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7891cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d78920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d78924: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d78924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d78928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d78928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7892c: 0x875ded8  j           func_1D77B60
    ctx->pc = 0x1D7892Cu;
    ctx->pc = 0x1D78930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7892Cu;
    // 0x1d78930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B60u;
    sub_01D77B60_0x1d77b60(rdram, ctx, runtime); return;
    ctx->pc = 0x1D78934u;
    // 0x1d78934: 0x0  nop
    ctx->pc = 0x1d78934u;
    // NOP
    ctx->pc = 0x1d78938u;
}
