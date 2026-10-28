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

// Function: sub_01D29570
// Address: 0x1d29570 - 0x1d29608
void sub_01D29570_0x1d29570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29570_0x1d29570");
#endif

    switch (ctx->pc) {
        case 0x1d2959cu: goto label_1d2959c;
        case 0x1d295a8u: goto label_1d295a8;
        case 0x1d295e4u: goto label_1d295e4;
        case 0x1d295f4u: goto label_1d295f4;
        default: break;
    }

    ctx->pc = 0x1d29570u;

    // 0x1d29570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d29570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d29574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d29574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29578: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d29578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d2957c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2957cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29580: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d29580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d29584: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d29584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d29588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d29588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2958c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d2958cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29590: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d29590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d29594: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D29594u;
    SET_GPR_U32(ctx, 31, 0x1D2959Cu);
    ctx->pc = 0x1D29598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29594u;
    // 0x1d29598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D29594u, 0x1D2959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2959Cu;
label_1d2959c:
    // 0x1d2959c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d295a0: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D295A0u;
    SET_GPR_U32(ctx, 31, 0x1D295A8u);
    ctx->pc = 0x1D295A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D295A0u;
    // 0x1d295a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D295A0u, 0x1D295A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D295A8u;
label_1d295a8:
    // 0x1d295a8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d295a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d295ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d295acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d295b0: 0x25ef33d4  addiu       $t7, $t7, 0x33D4
    ctx->pc = 0x1d295b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13268));
    // 0x1d295b4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d295b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d295b8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d295b8u;
    { uint32_t bits = FAST_READ32(0x1D333D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d295bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d295bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d295c0: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d295c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d295c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d295c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d295c8: 0x25ef33d8  addiu       $t7, $t7, 0x33D8
    ctx->pc = 0x1d295c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13272));
    // 0x1d295cc: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1d295ccu;
    { uint32_t bits = FAST_READ32(0x1D333D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d295d0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1d295d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d295d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d295d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d295d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d295d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d295dc: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D295DCu;
    SET_GPR_U32(ctx, 31, 0x1D295E4u);
    ctx->pc = 0x1D295E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D295DCu;
    // 0x1d295e0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D295DCu, 0x1D295E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D295E4u;
label_1d295e4:
    // 0x1d295e4: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1d295e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1d295e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d295e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d295ec: 0xc749b0a  jal         func_1D26C28
    ctx->pc = 0x1D295ECu;
    SET_GPR_U32(ctx, 31, 0x1D295F4u);
    ctx->pc = 0x1D295F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D295ECu;
    // 0x1d295f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C28u, 0x1D295ECu, 0x1D295F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D295F4u;
label_1d295f4:
    // 0x1d295f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d295f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d295f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d295f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d295fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D295FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D295FCu;
        // 0x1d29600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D295FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29604u;
    // 0x1d29604: 0x0  nop
    ctx->pc = 0x1d29604u;
    // NOP
    ctx->pc = 0x1d29608u;
}
