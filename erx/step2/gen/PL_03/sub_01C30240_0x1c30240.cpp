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

// Function: sub_01C30240
// Address: 0x1c30240 - 0x1c30350
void sub_01C30240_0x1c30240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30240_0x1c30240");
#endif

    switch (ctx->pc) {
        case 0x1c3025cu: goto label_1c3025c;
        case 0x1c30264u: goto label_1c30264;
        case 0x1c30278u: goto label_1c30278;
        case 0x1c3027cu: goto label_1c3027c;
        case 0x1c302d4u: goto label_1c302d4;
        case 0x1c302e4u: goto label_1c302e4;
        case 0x1c302f8u: goto label_1c302f8;
        case 0x1c3030cu: goto label_1c3030c;
        case 0x1c3031cu: goto label_1c3031c;
        default: break;
    }

    ctx->pc = 0x1c30240u;

    // 0x1c30240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c30240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c30244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c30244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c30248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3024c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3024cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c30250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c30254: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C30254u;
    SET_GPR_U32(ctx, 31, 0x1C3025Cu);
    ctx->pc = 0x1C30258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30254u;
    // 0x1c30258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C30254u, 0x1C3025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3025Cu;
label_1c3025c:
    // 0x1c3025c: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C3025Cu;
    SET_GPR_U32(ctx, 31, 0x1C30264u);
    ctx->pc = 0x1C30260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3025Cu;
    // 0x1c30260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C3025Cu, 0x1C30264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30264u;
label_1c30264:
    // 0x1c30264: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c30264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30268: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C30268u;
    {
        const bool branch_taken_0x1c30268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C3026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30268u;
        // 0x1c3026c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30268) {
            ctx->pc = 0x1C3028Cu;
            goto label_1c3028c;
        }
    }
    ctx->pc = 0x1C30270u;
    // 0x1c30270: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C30270u;
    SET_GPR_U32(ctx, 31, 0x1C30278u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C30270u, 0x1C30278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30278u;
label_1c30278:
    // 0x1c30278: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c30278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c3027c:
    // 0x1c3027c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3027cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30280: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c30280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30284: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30284u;
        // 0x1c30288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3028Cu;
label_1c3028c:
    // 0x1c3028c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3028Cu;
    {
        const bool branch_taken_0x1c3028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3028Cu;
        // 0x1c30290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3028c) {
            ctx->pc = 0x1C3027Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3027c;
        }
    }
    ctx->pc = 0x1C30294u;
    // 0x1c30294: 0x0  nop
    ctx->pc = 0x1c30294u;
    // NOP
    // 0x1c30298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c30298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3029c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c302a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c302a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c302a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c302a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c302a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c302a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c302ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c302acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c302b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c302b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c302b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c302b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c302b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c302b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c302bc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c302bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c302c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c302c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c302c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c302c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c302c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c302c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c302cc: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C302CCu;
    SET_GPR_U32(ctx, 31, 0x1C302D4u);
    ctx->pc = 0x1C302D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C302CCu;
    // 0x1c302d0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C302CCu, 0x1C302D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C302D4u;
label_1c302d4:
    // 0x1c302d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c302d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c302d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c302d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c302dc: 0xc70bdd8  jal         func_1C2F760
    ctx->pc = 0x1C302DCu;
    SET_GPR_U32(ctx, 31, 0x1C302E4u);
    ctx->pc = 0x1C302E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C302DCu;
    // 0x1c302e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F760u, 0x1C302DCu, 0x1C302E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C302E4u;
label_1c302e4:
    // 0x1c302e4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c302e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c302e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c302e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c302ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c302ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c302f0: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C302F0u;
    SET_GPR_U32(ctx, 31, 0x1C302F8u);
    ctx->pc = 0x1C302F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C302F0u;
    // 0x1c302f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C302F0u, 0x1C302F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C302F8u;
label_1c302f8:
    // 0x1c302f8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c302f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c302fc: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c302fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c30300: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c30300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30304: 0xc70bddc  jal         func_1C2F770
    ctx->pc = 0x1C30304u;
    SET_GPR_U32(ctx, 31, 0x1C3030Cu);
    ctx->pc = 0x1C30308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30304u;
    // 0x1c30308: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F770u, 0x1C30304u, 0x1C3030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3030Cu;
label_1c3030c:
    // 0x1c3030c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3030cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c30310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30314: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C30314u;
    SET_GPR_U32(ctx, 31, 0x1C3031Cu);
    ctx->pc = 0x1C30318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30314u;
    // 0x1c30318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C30314u, 0x1C3031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3031Cu;
label_1c3031c:
    // 0x1c3031c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c3031cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c30320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30324: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c30324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3032c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3032cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c30330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c30334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c30338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c30338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3033c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c3033cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c30340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c30340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c30344: 0x870bdde  j           func_1C2F778
    ctx->pc = 0x1C30344u;
    ctx->pc = 0x1C30348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30344u;
    // 0x1c30348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F778u;
    sub_01C2F778_0x1c2f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C3034Cu;
    // 0x1c3034c: 0x0  nop
    ctx->pc = 0x1c3034cu;
    // NOP
    ctx->pc = 0x1c30350u;
}
