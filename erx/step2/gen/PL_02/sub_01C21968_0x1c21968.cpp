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

// Function: sub_01C21968
// Address: 0x1c21968 - 0x1c21a00
void sub_01C21968_0x1c21968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21968_0x1c21968");
#endif

    switch (ctx->pc) {
        case 0x1c21994u: goto label_1c21994;
        case 0x1c219a0u: goto label_1c219a0;
        case 0x1c219dcu: goto label_1c219dc;
        case 0x1c219ecu: goto label_1c219ec;
        default: break;
    }

    ctx->pc = 0x1c21968u;

    // 0x1c21968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2196c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2196cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21970: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c21970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c21974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c21978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c2197c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c2197cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21984: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c21984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21988: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c21988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c2198c: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C2198Cu;
    SET_GPR_U32(ctx, 31, 0x1C21994u);
    ctx->pc = 0x1C21990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2198Cu;
    // 0x1c21990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C2198Cu, 0x1C21994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21994u;
label_1c21994:
    // 0x1c21994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21998: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C21998u;
    SET_GPR_U32(ctx, 31, 0x1C219A0u);
    ctx->pc = 0x1C2199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21998u;
    // 0x1c2199c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C21998u, 0x1C219A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C219A0u;
label_1c219a0:
    // 0x1c219a0: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c219a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c219a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c219a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c219a8: 0x25eff5d8  addiu       $t7, $t7, -0xA28
    ctx->pc = 0x1c219a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964696));
    // 0x1c219ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c219acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c219b0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c219b0u;
    { uint32_t bits = FAST_READ32(0x1C2F5D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c219b4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c219b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c219b8: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c219b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c219bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c219bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c219c0: 0x25eff5dc  addiu       $t7, $t7, -0xA24
    ctx->pc = 0x1c219c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964700));
    // 0x1c219c4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1c219c4u;
    { uint32_t bits = FAST_READ32(0x1C2F5DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c219c8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1c219c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c219cc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c219ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c219d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c219d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c219d4: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C219D4u;
    SET_GPR_U32(ctx, 31, 0x1C219DCu);
    ctx->pc = 0x1C219D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C219D4u;
    // 0x1c219d8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C219D4u, 0x1C219DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C219DCu;
label_1c219dc:
    // 0x1c219dc: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1c219dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1c219e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c219e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c219e4: 0xc707c48  jal         func_1C1F120
    ctx->pc = 0x1C219E4u;
    SET_GPR_U32(ctx, 31, 0x1C219ECu);
    ctx->pc = 0x1C219E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C219E4u;
    // 0x1c219e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F120u, 0x1C219E4u, 0x1C219ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C219ECu;
label_1c219ec:
    // 0x1c219ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c219ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c219f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c219f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c219f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C219F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C219F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C219F4u;
        // 0x1c219f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C219F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C219FCu;
    // 0x1c219fc: 0x0  nop
    ctx->pc = 0x1c219fcu;
    // NOP
    ctx->pc = 0x1c21a00u;
}
