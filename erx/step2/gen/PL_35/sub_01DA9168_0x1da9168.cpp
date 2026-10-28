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

// Function: sub_01DA9168
// Address: 0x1da9168 - 0x1da9200
void sub_01DA9168_0x1da9168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9168_0x1da9168");
#endif

    switch (ctx->pc) {
        case 0x1da9194u: goto label_1da9194;
        case 0x1da91a0u: goto label_1da91a0;
        case 0x1da91dcu: goto label_1da91dc;
        case 0x1da91ecu: goto label_1da91ec;
        default: break;
    }

    ctx->pc = 0x1da9168u;

    // 0x1da9168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da9168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da916c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da916cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da9170: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1da9170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1da9174: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da9174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9178: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1da9178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1da917c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1da917cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da9180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da9180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9184: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da9184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9188: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da9188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da918c: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA918Cu;
    SET_GPR_U32(ctx, 31, 0x1DA9194u);
    ctx->pc = 0x1DA9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA918Cu;
    // 0x1da9190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA918Cu, 0x1DA9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9194u;
label_1da9194:
    // 0x1da9194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da9194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9198: 0xc769b9c  jal         func_1DA6E70
    ctx->pc = 0x1DA9198u;
    SET_GPR_U32(ctx, 31, 0x1DA91A0u);
    ctx->pc = 0x1DA919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9198u;
    // 0x1da919c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E70u, 0x1DA9198u, 0x1DA91A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA91A0u;
label_1da91a0:
    // 0x1da91a0: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da91a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da91a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da91a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da91a8: 0x25ef0e58  addiu       $t7, $t7, 0xE58
    ctx->pc = 0x1da91a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3672));
    // 0x1da91ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da91acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da91b0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1da91b0u;
    { uint32_t bits = FAST_READ32(0x1DB0E58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da91b4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1da91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1da91b8: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da91b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da91bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1da91bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1da91c0: 0x25ef0e5c  addiu       $t7, $t7, 0xE5C
    ctx->pc = 0x1da91c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3676));
    // 0x1da91c4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1da91c4u;
    { uint32_t bits = FAST_READ32(0x1DB0E5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da91c8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1da91c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1da91cc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1da91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1da91d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1da91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1da91d4: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA91D4u;
    SET_GPR_U32(ctx, 31, 0x1DA91DCu);
    ctx->pc = 0x1DA91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA91D4u;
    // 0x1da91d8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA91D4u, 0x1DA91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA91DCu;
label_1da91dc:
    // 0x1da91dc: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1da91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1da91e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1da91e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da91e4: 0xc769b88  jal         func_1DA6E20
    ctx->pc = 0x1DA91E4u;
    SET_GPR_U32(ctx, 31, 0x1DA91ECu);
    ctx->pc = 0x1DA91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA91E4u;
    // 0x1da91e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E20u, 0x1DA91E4u, 0x1DA91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA91ECu;
label_1da91ec:
    // 0x1da91ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1da91ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da91f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1da91f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da91f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA91F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA91F4u;
        // 0x1da91f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA91F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA91FCu;
    // 0x1da91fc: 0x0  nop
    ctx->pc = 0x1da91fcu;
    // NOP
    ctx->pc = 0x1da9200u;
}
