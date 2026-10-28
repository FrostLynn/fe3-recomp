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

// Function: sub_01C026C0
// Address: 0x1c026c0 - 0x1c02858
void sub_01C026C0_0x1c026c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C026C0_0x1c026c0");
#endif

    switch (ctx->pc) {
        case 0x1c02708u: goto label_1c02708;
        case 0x1c0271cu: goto label_1c0271c;
        case 0x1c02720u: goto label_1c02720;
        case 0x1c02754u: goto label_1c02754;
        case 0x1c02780u: goto label_1c02780;
        case 0x1c02790u: goto label_1c02790;
        case 0x1c027bcu: goto label_1c027bc;
        case 0x1c027dcu: goto label_1c027dc;
        case 0x1c027e8u: goto label_1c027e8;
        case 0x1c02834u: goto label_1c02834;
        case 0x1c02850u: goto label_1c02850;
        default: break;
    }

    ctx->pc = 0x1c026c0u;

    // 0x1c026c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c026c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c026c4: 0x240f00e7  addiu       $t7, $zero, 0xE7
    ctx->pc = 0x1c026c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x1c026c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c026c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c026cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c026ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c026d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c026d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c026d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c026d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c026d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c026d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c026dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c026dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c026e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c026e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c026e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c026e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c026e8: 0x108f0054  beq         $a0, $t7, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C026E8u;
    {
        const bool branch_taken_0x1c026e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C026ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C026E8u;
        // 0x1c026ec: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c026e8) {
            ctx->pc = 0x1C0283Cu;
            goto label_1c0283c;
        }
    }
    ctx->pc = 0x1C026F0u;
    // 0x1c026f0: 0x288f00e8  slti        $t7, $a0, 0xE8
    ctx->pc = 0x1c026f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)232) ? 1 : 0);
    // 0x1c026f4: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C026F4u;
    {
        const bool branch_taken_0x1c026f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C026F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C026F4u;
        // 0x1c026f8: 0x240f00e6  addiu       $t7, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c026f4) {
            ctx->pc = 0x1C0275Cu;
            goto label_1c0275c;
        }
    }
    ctx->pc = 0x1C026FCu;
    // 0x1c026fc: 0x108f0011  beq         $a0, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C026FCu;
    {
        const bool branch_taken_0x1c026fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C02700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C026FCu;
        // 0x1c02700: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c026fc) {
            ctx->pc = 0x1C02744u;
            goto label_1c02744;
        }
    }
    ctx->pc = 0x1C02704u;
    // 0x1c02704: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1c02704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1c02708:
    // 0x1c02708: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1c02708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1c0270c: 0x248400c8  addiu       $a0, $a0, 0xC8
    ctx->pc = 0x1c0270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1c02710: 0x24a53750  addiu       $a1, $a1, 0x3750
    ctx->pc = 0x1c02710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
    // 0x1c02714: 0xc700034  jal         func_1C000D0
    ctx->pc = 0x1C02714u;
    SET_GPR_U32(ctx, 31, 0x1C0271Cu);
    ctx->pc = 0x1C02718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02714u;
    // 0x1c02718: 0x240602b3  addiu       $a2, $zero, 0x2B3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C000D0u, 0x1C02714u, 0x1C0271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0271Cu;
label_1c0271c:
    // 0x1c0271c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0271cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c02720:
    // 0x1c02720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c02720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c02724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c02728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c02728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0272c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0272cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c02730: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c02730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c02734: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c02734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c02738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c02738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0273c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0273Cu;
        // 0x1c02740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0273Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02744u;
label_1c02744:
    // 0x1c02744: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c02744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02748: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x1c02748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x1c0274c: 0xc70042c  jal         func_1C010B0
    ctx->pc = 0x1C0274Cu;
    SET_GPR_U32(ctx, 31, 0x1C02754u);
    ctx->pc = 0x1C02750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0274Cu;
    // 0x1c02750: 0x24c6bcf0  addiu       $a2, $a2, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C010B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C010B0u, 0x1C0274Cu, 0x1C02754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02754u;
label_1c02754:
    // 0x1c02754: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1C02754u;
    {
        const bool branch_taken_0x1c02754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02754u;
        // 0x1c02758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02754) {
            ctx->pc = 0x1C02720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02720;
        }
    }
    ctx->pc = 0x1C0275Cu;
label_1c0275c:
    // 0x1c0275c: 0x240f00e8  addiu       $t7, $zero, 0xE8
    ctx->pc = 0x1c0275cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1c02760: 0x548fffe9  bnel        $a0, $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C02760u;
    {
        const bool branch_taken_0x1c02760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c02760) {
            ctx->pc = 0x1C02764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C02760u;
            // 0x1c02764: 0x3c0401c0  lui         $a0, 0x1C0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C02708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02708;
        }
    }
    ctx->pc = 0x1C02768u;
    // 0x1c02768: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1c02768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c0276c: 0x24d30010  addiu       $s3, $a2, 0x10
    ctx->pc = 0x1c0276cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c02770: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x1c02770u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x1c02774: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x1c02774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c02778: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C02778u;
    SET_GPR_U32(ctx, 31, 0x1C02780u);
    ctx->pc = 0x1C0277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02778u;
    // 0x1c0277c: 0x2690bcf0  addiu       $s0, $s4, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C02778u, 0x1C02780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02780u;
label_1c02780:
    // 0x1c02780: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1c02780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c02784: 0x24510200  addiu       $s1, $v0, 0x200
    ctx->pc = 0x1c02784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c02788: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C02788u;
    SET_GPR_U32(ctx, 31, 0x1C02790u);
    ctx->pc = 0x1C0278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02788u;
    // 0x1c0278c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C02788u, 0x1C02790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02790u;
label_1c02790:
    // 0x1c02790: 0x8e2e0048  lw          $t6, 0x48($s1)
    ctx->pc = 0x1c02790u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1c02794: 0x240f001c  addiu       $t7, $zero, 0x1C
    ctx->pc = 0x1c02794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c02798: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c02798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0279c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c027a0: 0x8dcd4868  lw          $t5, 0x4868($t6)
    ctx->pc = 0x1c027a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18536)));
    // 0x1c027a4: 0x8dc54944  lw          $a1, 0x4944($t6)
    ctx->pc = 0x1c027a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18756)));
    // 0x1c027a8: 0xadaf007c  sw          $t7, 0x7C($t5)
    ctx->pc = 0x1c027a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 15));
    // 0x1c027ac: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1c027acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1c027b0: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c027b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c027b4: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C027B4u;
    SET_GPR_U32(ctx, 31, 0x1C027BCu);
    ctx->pc = 0x1C027B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C027B4u;
    // 0x1c027b8: 0xaeaf0034  sw          $t7, 0x34($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C027B4u, 0x1C027BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C027BCu;
label_1c027bc:
    // 0x1c027bc: 0x8e4e024c  lw          $t6, 0x24C($s2)
    ctx->pc = 0x1c027bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 588)));
    // 0x1c027c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c027c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c027c4: 0x8e2f0048  lw          $t7, 0x48($s1)
    ctx->pc = 0x1c027c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1c027c8: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c027c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c027cc: 0x8de64944  lw          $a2, 0x4944($t7)
    ctx->pc = 0x1c027ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18756)));
    // 0x1c027d0: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1c027d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1c027d4: 0xc700008  jal         func_1C00020
    ctx->pc = 0x1C027D4u;
    SET_GPR_U32(ctx, 31, 0x1C027DCu);
    ctx->pc = 0x1C027D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C027D4u;
    // 0x1c027d8: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00020u, 0x1C027D4u, 0x1C027DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C027DCu;
label_1c027dc:
    // 0x1c027dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c027dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c027e0: 0xc70000a  jal         func_1C00028
    ctx->pc = 0x1C027E0u;
    SET_GPR_U32(ctx, 31, 0x1C027E8u);
    ctx->pc = 0x1C027E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C027E0u;
    // 0x1c027e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00028u, 0x1C027E0u, 0x1C027E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C027E8u;
label_1c027e8:
    // 0x1c027e8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1c027e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c027ec: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c027ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c027f0: 0x8e8dbcf0  lw          $t5, -0x4310($s4)
    ctx->pc = 0x1c027f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950128)));
    // 0x1c027f4: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x1c027f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1c027f8: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x1c027f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x1c027fc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1c027fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c02800: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c02800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c02804: 0x8e2e00b4  lw          $t6, 0xB4($s1)
    ctx->pc = 0x1c02804u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1c02808: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1c02808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0280c: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x1c0280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x1c02810: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x1c02810u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c02814: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c02814u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c02818: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c02818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0281c: 0xaeaf0038  sw          $t7, 0x38($s5)
    ctx->pc = 0x1c0281cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 15));
    // 0x1c02820: 0xe6a1002c  swc1        $f1, 0x2C($s5)
    ctx->pc = 0x1c02820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x1c02824: 0xaeae0028  sw          $t6, 0x28($s5)
    ctx->pc = 0x1c02824u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 14));
    // 0x1c02828: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1c02828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0282c: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C0282Cu;
    SET_GPR_U32(ctx, 31, 0x1C02834u);
    ctx->pc = 0x1C02830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0282Cu;
    // 0x1c02830: 0xe6a00030  swc1        $f0, 0x30($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C0282Cu, 0x1C02834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02834u;
label_1c02834:
    // 0x1c02834: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x1C02834u;
    {
        const bool branch_taken_0x1c02834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02834u;
        // 0x1c02838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02834) {
            ctx->pc = 0x1C02720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02720;
        }
    }
    ctx->pc = 0x1C0283Cu;
label_1c0283c:
    // 0x1c0283c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c0283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02840: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c02840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02844: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x1c02844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x1c02848: 0xc700534  jal         func_1C014D0
    ctx->pc = 0x1C02848u;
    SET_GPR_U32(ctx, 31, 0x1C02850u);
    ctx->pc = 0x1C0284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02848u;
    // 0x1c0284c: 0x24c6bd20  addiu       $a2, $a2, -0x42E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C014D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C014D0u, 0x1C02848u, 0x1C02850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02850u;
label_1c02850:
    // 0x1c02850: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x1C02850u;
    {
        const bool branch_taken_0x1c02850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02850u;
        // 0x1c02854: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02850) {
            ctx->pc = 0x1C02720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02720;
        }
    }
    ctx->pc = 0x1C02858u;
}
