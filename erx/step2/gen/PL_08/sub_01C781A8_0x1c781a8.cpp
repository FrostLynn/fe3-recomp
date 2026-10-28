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

// Function: sub_01C781A8
// Address: 0x1c781a8 - 0x1c78218
void sub_01C781A8_0x1c781a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C781A8_0x1c781a8");
#endif

    switch (ctx->pc) {
        case 0x1c781c4u: goto label_1c781c4;
        case 0x1c78204u: goto label_1c78204;
        default: break;
    }

    ctx->pc = 0x1c781a8u;

    // 0x1c781a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c781a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c781ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c781acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c781b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c781b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c781b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c781b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c781b8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c781b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c781bc: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C781BCu;
    SET_GPR_U32(ctx, 31, 0x1C781C4u);
    ctx->pc = 0x1C781C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C781BCu;
    // 0x1c781c0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C781BCu, 0x1C781C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C781C4u;
label_1c781c4:
    // 0x1c781c4: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x1c781c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c781c8: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c781c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c781cc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1c781ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c781d0: 0x25ef0df8  addiu       $t7, $t7, 0xDF8
    ctx->pc = 0x1c781d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3576));
    // 0x1c781d4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1c781d4u;
    { uint32_t bits = FAST_READ32(0x1C80DF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c781d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c781d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c781dc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1c781dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c781e0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c781e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c781e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C781E4u;
    {
        const bool branch_taken_0x1c781e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C781E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C781E4u;
        // 0x1c781e8: 0xe602001c  swc1        $f2, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c781e4) {
            ctx->pc = 0x1C781FCu;
            goto label_1c781fc;
        }
    }
    ctx->pc = 0x1C781ECu;
    // 0x1c781ec: 0x904e0950  lbu         $t6, 0x950($v0)
    ctx->pc = 0x1c781ecu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x1c781f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c781f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c781f4: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C781F4u;
    {
        const bool branch_taken_0x1c781f4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C781F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C781F4u;
        // 0x1c781f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c781f4) {
            ctx->pc = 0x1C78208u;
            goto label_1c78208;
        }
    }
    ctx->pc = 0x1C781FCu;
label_1c781fc:
    // 0x1c781fc: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C781FCu;
    SET_GPR_U32(ctx, 31, 0x1C78204u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C781FCu, 0x1C78204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78204u;
label_1c78204:
    // 0x1c78204: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c78204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c78208:
    // 0x1c78208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7820c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7820cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78210: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78210u;
        // 0x1c78214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78218u;
}
