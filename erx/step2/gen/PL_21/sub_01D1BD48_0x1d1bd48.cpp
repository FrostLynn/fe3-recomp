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

// Function: sub_01D1BD48
// Address: 0x1d1bd48 - 0x1d1bdd0
void sub_01D1BD48_0x1d1bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1BD48_0x1d1bd48");
#endif

    switch (ctx->pc) {
        case 0x1d1bd5cu: goto label_1d1bd5c;
        case 0x1d1bd68u: goto label_1d1bd68;
        default: break;
    }

    ctx->pc = 0x1d1bd48u;

    // 0x1d1bd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1bd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1bd50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1bd54: 0xc7466a8  jal         func_1D19AA0
    ctx->pc = 0x1D1BD54u;
    SET_GPR_U32(ctx, 31, 0x1D1BD5Cu);
    ctx->pc = 0x1D1BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BD54u;
    // 0x1d1bd58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AA0u, 0x1D1BD54u, 0x1D1BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BD5Cu;
label_1d1bd5c:
    // 0x1d1bd5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1bd60: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1BD60u;
    SET_GPR_U32(ctx, 31, 0x1D1BD68u);
    ctx->pc = 0x1D1BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BD60u;
    // 0x1d1bd64: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1BD60u, 0x1D1BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BD68u;
label_1d1bd68:
    // 0x1d1bd68: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1bd68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bd6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d1bd6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d1bd70: 0x25ef6b10  addiu       $t7, $t7, 0x6B10
    ctx->pc = 0x1d1bd70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27408));
    // 0x1d1bd74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1bd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1bd78: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1d1bd78u;
    { uint32_t bits = FAST_READ32(0x1D26B10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d1bd7c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d1bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d1bd80: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1d1bd80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d1bd84: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1bd84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bd88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1bd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1bd8c: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1d1bd8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1d1bd90: 0x25ef6b14  addiu       $t7, $t7, 0x6B14
    ctx->pc = 0x1d1bd90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27412));
    // 0x1d1bd94: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1d1bd94u;
    { uint32_t bits = FAST_READ32(0x1D26B14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1bd98: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1d1bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1bd9c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1d1bd9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d1bda0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d1bda0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d1bda4: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1d1bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1d1bda8: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1d1bda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1d1bdac: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1d1bdacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1d1bdb0: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1d1bdb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1d1bdb4: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1d1bdb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1d1bdb8: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1d1bdb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1d1bdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BDBCu;
        // 0x1d1bdc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BDC4u;
    // 0x1d1bdc4: 0x0  nop
    ctx->pc = 0x1d1bdc4u;
    // NOP
    // 0x1d1bdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BDD0u;
}
