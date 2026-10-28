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

// Function: sub_01C10230
// Address: 0x1c10230 - 0x1c10340
void sub_01C10230_0x1c10230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10230_0x1c10230");
#endif

    switch (ctx->pc) {
        case 0x1c1024cu: goto label_1c1024c;
        case 0x1c10254u: goto label_1c10254;
        case 0x1c10268u: goto label_1c10268;
        case 0x1c1026cu: goto label_1c1026c;
        case 0x1c102c4u: goto label_1c102c4;
        case 0x1c102d4u: goto label_1c102d4;
        case 0x1c102e8u: goto label_1c102e8;
        case 0x1c102fcu: goto label_1c102fc;
        case 0x1c1030cu: goto label_1c1030c;
        default: break;
    }

    ctx->pc = 0x1c10230u;

    // 0x1c10230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c10234: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c10234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c10238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1023c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1023cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c10240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c10244: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C10244u;
    SET_GPR_U32(ctx, 31, 0x1C1024Cu);
    ctx->pc = 0x1C10248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10244u;
    // 0x1c10248: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C10244u, 0x1C1024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1024Cu;
label_1c1024c:
    // 0x1c1024c: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C1024Cu;
    SET_GPR_U32(ctx, 31, 0x1C10254u);
    ctx->pc = 0x1C10250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1024Cu;
    // 0x1c10250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C1024Cu, 0x1C10254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10254u;
label_1c10254:
    // 0x1c10254: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c10254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10258: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C10258u;
    {
        const bool branch_taken_0x1c10258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C1025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10258u;
        // 0x1c1025c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10258) {
            ctx->pc = 0x1C1027Cu;
            goto label_1c1027c;
        }
    }
    ctx->pc = 0x1C10260u;
    // 0x1c10260: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C10260u;
    SET_GPR_U32(ctx, 31, 0x1C10268u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C10260u, 0x1C10268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10268u;
label_1c10268:
    // 0x1c10268: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c10268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c1026c:
    // 0x1c1026c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1026cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c10270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10274: 0x3e00008  jr          $ra
    ctx->pc = 0x1C10274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10274u;
        // 0x1c10278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1027Cu;
label_1c1027c:
    // 0x1c1027c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C1027Cu;
    {
        const bool branch_taken_0x1c1027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1027Cu;
        // 0x1c10280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1027c) {
            ctx->pc = 0x1C1026Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1026c;
        }
    }
    ctx->pc = 0x1C10284u;
    // 0x1c10284: 0x0  nop
    ctx->pc = 0x1c10284u;
    // NOP
    // 0x1c10288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c10288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1028c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10290: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c10290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c10294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c10294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c10298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c10298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1029c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c102a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c102a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c102a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c102a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c102a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c102a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c102ac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c102acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c102b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c102b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c102b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c102b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c102b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c102b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c102bc: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C102BCu;
    SET_GPR_U32(ctx, 31, 0x1C102C4u);
    ctx->pc = 0x1C102C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C102BCu;
    // 0x1c102c0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C102BCu, 0x1C102C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C102C4u;
label_1c102c4:
    // 0x1c102c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c102c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c102c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c102c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c102cc: 0xc703dd8  jal         func_1C0F760
    ctx->pc = 0x1C102CCu;
    SET_GPR_U32(ctx, 31, 0x1C102D4u);
    ctx->pc = 0x1C102D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C102CCu;
    // 0x1c102d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F760u, 0x1C102CCu, 0x1C102D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C102D4u;
label_1c102d4:
    // 0x1c102d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c102d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c102d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c102d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c102dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c102dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c102e0: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C102E0u;
    SET_GPR_U32(ctx, 31, 0x1C102E8u);
    ctx->pc = 0x1C102E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C102E0u;
    // 0x1c102e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C102E0u, 0x1C102E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C102E8u;
label_1c102e8:
    // 0x1c102e8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c102e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c102ec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c102ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c102f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c102f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c102f4: 0xc703ddc  jal         func_1C0F770
    ctx->pc = 0x1C102F4u;
    SET_GPR_U32(ctx, 31, 0x1C102FCu);
    ctx->pc = 0x1C102F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C102F4u;
    // 0x1c102f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F770u, 0x1C102F4u, 0x1C102FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C102FCu;
label_1c102fc:
    // 0x1c102fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c102fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c10300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10304: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C10304u;
    SET_GPR_U32(ctx, 31, 0x1C1030Cu);
    ctx->pc = 0x1C10308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10304u;
    // 0x1c10308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C10304u, 0x1C1030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1030Cu;
label_1c1030c:
    // 0x1c1030c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c1030cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c10310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10314: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c10314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1031c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1031cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c10320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c10324: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c10324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c10328: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c10328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1032c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c1032cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c10330: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c10330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c10334: 0x8703dde  j           func_1C0F778
    ctx->pc = 0x1C10334u;
    ctx->pc = 0x1C10338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10334u;
    // 0x1c10338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F778u;
    sub_01C0F778_0x1c0f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1033Cu;
    // 0x1c1033c: 0x0  nop
    ctx->pc = 0x1c1033cu;
    // NOP
    ctx->pc = 0x1c10340u;
}
