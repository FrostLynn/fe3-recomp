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

// Function: sub_01CFF968
// Address: 0x1cff968 - 0x1cffa00
void sub_01CFF968_0x1cff968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF968_0x1cff968");
#endif

    switch (ctx->pc) {
        case 0x1cff994u: goto label_1cff994;
        case 0x1cff9a0u: goto label_1cff9a0;
        case 0x1cff9dcu: goto label_1cff9dc;
        case 0x1cff9ecu: goto label_1cff9ec;
        default: break;
    }

    ctx->pc = 0x1cff968u;

    // 0x1cff968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff96c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cff96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff970: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cff970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cff974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cff978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cff97c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cff97cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cff980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff984: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cff984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff988: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cff988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff98c: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF98Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF994u);
    ctx->pc = 0x1CFF990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF98Cu;
    // 0x1cff990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF98Cu, 0x1CFF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF994u;
label_1cff994:
    // 0x1cff994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff998: 0xc73f49e  jal         func_1CFD278
    ctx->pc = 0x1CFF998u;
    SET_GPR_U32(ctx, 31, 0x1CFF9A0u);
    ctx->pc = 0x1CFF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF998u;
    // 0x1cff99c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD278u, 0x1CFF998u, 0x1CFF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF9A0u;
label_1cff9a0:
    // 0x1cff9a0: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff9a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cff9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cff9a8: 0x25efbc50  addiu       $t7, $t7, -0x43B0
    ctx->pc = 0x1cff9a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949968));
    // 0x1cff9ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff9b0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff9b0u;
    { uint32_t bits = FAST_READ32(0x1D0BC50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff9b4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cff9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cff9b8: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff9b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff9bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cff9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cff9c0: 0x25efbc54  addiu       $t7, $t7, -0x43AC
    ctx->pc = 0x1cff9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949972));
    // 0x1cff9c4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cff9c4u;
    { uint32_t bits = FAST_READ32(0x1D0BC54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cff9c8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1cff9c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cff9cc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cff9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cff9d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cff9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cff9d4: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF9D4u;
    SET_GPR_U32(ctx, 31, 0x1CFF9DCu);
    ctx->pc = 0x1CFF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF9D4u;
    // 0x1cff9d8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF9D4u, 0x1CFF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF9DCu;
label_1cff9dc:
    // 0x1cff9dc: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1cff9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1cff9e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cff9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff9e4: 0xc73f488  jal         func_1CFD220
    ctx->pc = 0x1CFF9E4u;
    SET_GPR_U32(ctx, 31, 0x1CFF9ECu);
    ctx->pc = 0x1CFF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF9E4u;
    // 0x1cff9e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD220u, 0x1CFF9E4u, 0x1CFF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF9ECu;
label_1cff9ec:
    // 0x1cff9ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cff9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff9f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cff9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cff9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF9F4u;
        // 0x1cff9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF9FCu;
    // 0x1cff9fc: 0x0  nop
    ctx->pc = 0x1cff9fcu;
    // NOP
    ctx->pc = 0x1cffa00u;
}
