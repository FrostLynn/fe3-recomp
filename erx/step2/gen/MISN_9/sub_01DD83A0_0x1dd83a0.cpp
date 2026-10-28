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

// Function: sub_01DD83A0
// Address: 0x1dd83a0 - 0x1dd8498
void sub_01DD83A0_0x1dd83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD83A0_0x1dd83a0");
#endif

    switch (ctx->pc) {
        case 0x1dd83dcu: goto label_1dd83dc;
        case 0x1dd83f0u: goto label_1dd83f0;
        case 0x1dd8404u: goto label_1dd8404;
        case 0x1dd8418u: goto label_1dd8418;
        case 0x1dd843cu: goto label_1dd843c;
        case 0x1dd8458u: goto label_1dd8458;
        default: break;
    }

    ctx->pc = 0x1dd83a0u;

    // 0x1dd83a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd83a4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd83a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd83a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd83ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd83acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd83b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd83b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd83b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd83b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd83b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd83bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd83bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd83c0: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD83C0u;
    {
        const bool branch_taken_0x1dd83c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD83C0u;
        // 0x1dd83c4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd83c0) {
            ctx->pc = 0x1DD8448u;
            goto label_1dd8448;
        }
    }
    ctx->pc = 0x1DD83C8u;
    // 0x1dd83c8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd83c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd83cc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd83ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd83d0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd83d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd83d4: 0xc7760ca  jal         func_1DD8328
    ctx->pc = 0x1DD83D4u;
    SET_GPR_U32(ctx, 31, 0x1DD83DCu);
    ctx->pc = 0x1DD83D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD83D4u;
    // 0x1dd83d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8328u, 0x1DD83D4u, 0x1DD83DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD83DCu;
label_1dd83dc:
    // 0x1dd83dc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd83dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd83e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd83e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd83e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd83e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd83e8: 0xc7760cc  jal         func_1DD8330
    ctx->pc = 0x1DD83E8u;
    SET_GPR_U32(ctx, 31, 0x1DD83F0u);
    ctx->pc = 0x1DD83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD83E8u;
    // 0x1dd83ec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8330u, 0x1DD83E8u, 0x1DD83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD83F0u;
label_1dd83f0:
    // 0x1dd83f0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd83f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd83f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd83f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd83f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd83f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd83fc: 0xc7760ce  jal         func_1DD8338
    ctx->pc = 0x1DD83FCu;
    SET_GPR_U32(ctx, 31, 0x1DD8404u);
    ctx->pc = 0x1DD8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD83FCu;
    // 0x1dd8400: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8338u, 0x1DD83FCu, 0x1DD8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8404u;
label_1dd8404:
    // 0x1dd8404: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd8404u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd8408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd8408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd840c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd840cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8410: 0xc7760d0  jal         func_1DD8340
    ctx->pc = 0x1DD8410u;
    SET_GPR_U32(ctx, 31, 0x1DD8418u);
    ctx->pc = 0x1DD8414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8410u;
    // 0x1dd8414: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8340u, 0x1DD8410u, 0x1DD8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8418u;
label_1dd8418:
    // 0x1dd8418: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd8418u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd841c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dd841cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8420: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dd8420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8424: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd8424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8428: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dd8428u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd842c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd842cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8430: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd8430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8434: 0xc7760d2  jal         func_1DD8348
    ctx->pc = 0x1DD8434u;
    SET_GPR_U32(ctx, 31, 0x1DD843Cu);
    ctx->pc = 0x1DD8438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8434u;
    // 0x1dd8438: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8348u, 0x1DD8434u, 0x1DD843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD843Cu;
label_1dd843c:
    // 0x1dd843c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd843cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd8440: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd8440u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd8444: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd8444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1dd8448:
    // 0x1dd8448: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd8448u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd844c: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd8450: 0xc7760d4  jal         func_1DD8350
    ctx->pc = 0x1DD8450u;
    SET_GPR_U32(ctx, 31, 0x1DD8458u);
    ctx->pc = 0x1DD8454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8450u;
    // 0x1dd8454: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8350u, 0x1DD8450u, 0x1DD8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8458u;
label_1dd8458:
    // 0x1dd8458: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd845c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd8460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD8460u;
    {
        const bool branch_taken_0x1dd8460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8460u;
        // 0x1dd8464: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8460) {
            ctx->pc = 0x1DD8470u;
            goto label_1dd8470;
        }
    }
    ctx->pc = 0x1DD8468u;
    // 0x1dd8468: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd8468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd846c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd846cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd8470:
    // 0x1dd8470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd8470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd8474: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dd8474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd8478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd847c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd847cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd8480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd8480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd8484: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd8484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd8488: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd8488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd848c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD848Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD848Cu;
        // 0x1dd8490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD848Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8494u;
    // 0x1dd8494: 0x0  nop
    ctx->pc = 0x1dd8494u;
    // NOP
    ctx->pc = 0x1dd8498u;
}
