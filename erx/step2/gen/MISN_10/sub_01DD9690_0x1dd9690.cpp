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

// Function: sub_01DD9690
// Address: 0x1dd9690 - 0x1dd9788
void sub_01DD9690_0x1dd9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9690_0x1dd9690");
#endif

    switch (ctx->pc) {
        case 0x1dd96ccu: goto label_1dd96cc;
        case 0x1dd96e0u: goto label_1dd96e0;
        case 0x1dd96f4u: goto label_1dd96f4;
        case 0x1dd9708u: goto label_1dd9708;
        case 0x1dd972cu: goto label_1dd972c;
        case 0x1dd9748u: goto label_1dd9748;
        default: break;
    }

    ctx->pc = 0x1dd9690u;

    // 0x1dd9690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd9690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd9694: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd9694u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd9698: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd9698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd969c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd96a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd96a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd96a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd96a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd96a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd96ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd96acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd96b0: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD96B0u;
    {
        const bool branch_taken_0x1dd96b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD96B0u;
        // 0x1dd96b4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd96b0) {
            ctx->pc = 0x1DD9738u;
            goto label_1dd9738;
        }
    }
    ctx->pc = 0x1DD96B8u;
    // 0x1dd96b8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd96b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd96bc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd96c0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd96c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd96c4: 0xc776586  jal         func_1DD9618
    ctx->pc = 0x1DD96C4u;
    SET_GPR_U32(ctx, 31, 0x1DD96CCu);
    ctx->pc = 0x1DD96C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD96C4u;
    // 0x1dd96c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9618u, 0x1DD96C4u, 0x1DD96CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD96CCu;
label_1dd96cc:
    // 0x1dd96cc: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd96ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd96d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd96d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd96d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd96d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd96d8: 0xc776588  jal         func_1DD9620
    ctx->pc = 0x1DD96D8u;
    SET_GPR_U32(ctx, 31, 0x1DD96E0u);
    ctx->pc = 0x1DD96DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD96D8u;
    // 0x1dd96dc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9620u, 0x1DD96D8u, 0x1DD96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD96E0u;
label_1dd96e0:
    // 0x1dd96e0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd96e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd96e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd96e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd96e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd96e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd96ec: 0xc77658a  jal         func_1DD9628
    ctx->pc = 0x1DD96ECu;
    SET_GPR_U32(ctx, 31, 0x1DD96F4u);
    ctx->pc = 0x1DD96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD96ECu;
    // 0x1dd96f0: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9628u, 0x1DD96ECu, 0x1DD96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD96F4u;
label_1dd96f4:
    // 0x1dd96f4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd96f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd96f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd96f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd96fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd96fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9700: 0xc77658c  jal         func_1DD9630
    ctx->pc = 0x1DD9700u;
    SET_GPR_U32(ctx, 31, 0x1DD9708u);
    ctx->pc = 0x1DD9704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9700u;
    // 0x1dd9704: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9630u, 0x1DD9700u, 0x1DD9708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9708u;
label_1dd9708:
    // 0x1dd9708: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9708u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd970c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dd970cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9710: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dd9710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9714: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd9714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9718: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dd9718u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd971c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd971cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9720: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd9720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9724: 0xc77658e  jal         func_1DD9638
    ctx->pc = 0x1DD9724u;
    SET_GPR_U32(ctx, 31, 0x1DD972Cu);
    ctx->pc = 0x1DD9728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9724u;
    // 0x1dd9728: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9638u, 0x1DD9724u, 0x1DD972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD972Cu;
label_1dd972c:
    // 0x1dd972c: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd972cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd9730: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd9730u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd9734: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd9734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dd9738:
    // 0x1dd9738: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9738u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd973c: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd9740: 0xc776590  jal         func_1DD9640
    ctx->pc = 0x1DD9740u;
    SET_GPR_U32(ctx, 31, 0x1DD9748u);
    ctx->pc = 0x1DD9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9740u;
    // 0x1dd9744: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9640u, 0x1DD9740u, 0x1DD9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9748u;
label_1dd9748:
    // 0x1dd9748: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd9748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd974c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd9750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD9750u;
    {
        const bool branch_taken_0x1dd9750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9750u;
        // 0x1dd9754: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9750) {
            ctx->pc = 0x1DD9760u;
            goto label_1dd9760;
        }
    }
    ctx->pc = 0x1DD9758u;
    // 0x1dd9758: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd9758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd975c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd975cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd9760:
    // 0x1dd9760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd9760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9764: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dd9764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd9768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd976c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd976cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd9770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd9770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd9774: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd9774u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd9778: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd9778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd977c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD977Cu;
        // 0x1dd9780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD977Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9784u;
    // 0x1dd9784: 0x0  nop
    ctx->pc = 0x1dd9784u;
    // NOP
    ctx->pc = 0x1dd9788u;
}
