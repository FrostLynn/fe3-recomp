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

// Function: sub_01CB7238
// Address: 0x1cb7238 - 0x1cb7348
void sub_01CB7238_0x1cb7238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7238_0x1cb7238");
#endif

    switch (ctx->pc) {
        case 0x1cb7254u: goto label_1cb7254;
        case 0x1cb725cu: goto label_1cb725c;
        case 0x1cb7270u: goto label_1cb7270;
        case 0x1cb7274u: goto label_1cb7274;
        case 0x1cb72ccu: goto label_1cb72cc;
        case 0x1cb72dcu: goto label_1cb72dc;
        case 0x1cb72f0u: goto label_1cb72f0;
        case 0x1cb7304u: goto label_1cb7304;
        case 0x1cb7314u: goto label_1cb7314;
        default: break;
    }

    ctx->pc = 0x1cb7238u;

    // 0x1cb7238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb723c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb723cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb7240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb7240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb7244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7248: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb724c: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB724Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7254u);
    ctx->pc = 0x1CB7250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB724Cu;
    // 0x1cb7250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB724Cu, 0x1CB7254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7254u;
label_1cb7254:
    // 0x1cb7254: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB7254u;
    SET_GPR_U32(ctx, 31, 0x1CB725Cu);
    ctx->pc = 0x1CB7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7254u;
    // 0x1cb7258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB7254u, 0x1CB725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB725Cu;
label_1cb725c:
    // 0x1cb725c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb725cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7260: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB7260u;
    {
        const bool branch_taken_0x1cb7260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7260u;
        // 0x1cb7264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7260) {
            ctx->pc = 0x1CB7284u;
            goto label_1cb7284;
        }
    }
    ctx->pc = 0x1CB7268u;
    // 0x1cb7268: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB7268u;
    SET_GPR_U32(ctx, 31, 0x1CB7270u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB7268u, 0x1CB7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7270u;
label_1cb7270:
    // 0x1cb7270: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb7270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb7274:
    // 0x1cb7274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb7278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb727c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB727Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB727Cu;
        // 0x1cb7280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB727Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB7284u;
label_1cb7284:
    // 0x1cb7284: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB7284u;
    {
        const bool branch_taken_0x1cb7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7284u;
        // 0x1cb7288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7284) {
            ctx->pc = 0x1CB7274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7274;
        }
    }
    ctx->pc = 0x1CB728Cu;
    // 0x1cb728c: 0x0  nop
    ctx->pc = 0x1cb728cu;
    // NOP
    // 0x1cb7290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb7294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7298: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cb7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cb729c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cb729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cb72a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb72a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb72a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cb72a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb72acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb72b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb72b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb72b4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1cb72b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cb72b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cb72b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cb72bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb72bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb72c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cb72c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72c4: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB72C4u;
    SET_GPR_U32(ctx, 31, 0x1CB72CCu);
    ctx->pc = 0x1CB72C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB72C4u;
    // 0x1cb72c8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB72C4u, 0x1CB72CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB72CCu;
label_1cb72cc:
    // 0x1cb72cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb72d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cb72d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72d4: 0xc72d9d8  jal         func_1CB6760
    ctx->pc = 0x1CB72D4u;
    SET_GPR_U32(ctx, 31, 0x1CB72DCu);
    ctx->pc = 0x1CB72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB72D4u;
    // 0x1cb72d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6760u, 0x1CB72D4u, 0x1CB72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB72DCu;
label_1cb72dc:
    // 0x1cb72dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cb72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cb72e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cb72e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb72e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72e8: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB72E8u;
    SET_GPR_U32(ctx, 31, 0x1CB72F0u);
    ctx->pc = 0x1CB72ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB72E8u;
    // 0x1cb72ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB72E8u, 0x1CB72F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB72F0u;
label_1cb72f0:
    // 0x1cb72f0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1cb72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1cb72f4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1cb72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1cb72f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cb72f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb72fc: 0xc72d9dc  jal         func_1CB6770
    ctx->pc = 0x1CB72FCu;
    SET_GPR_U32(ctx, 31, 0x1CB7304u);
    ctx->pc = 0x1CB7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB72FCu;
    // 0x1cb7300: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6770u, 0x1CB72FCu, 0x1CB7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7304u;
label_1cb7304:
    // 0x1cb7304: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb7304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb7308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb730c: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB730Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7314u);
    ctx->pc = 0x1CB7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB730Cu;
    // 0x1cb7310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB730Cu, 0x1CB7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7314u;
label_1cb7314:
    // 0x1cb7314: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1cb7314u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cb7318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb731c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cb731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb7324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb7328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb732c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb732cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb7330: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cb7330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb7334: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cb7334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb7338: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cb7338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb733c: 0x872d9de  j           func_1CB6778
    ctx->pc = 0x1CB733Cu;
    ctx->pc = 0x1CB7340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB733Cu;
    // 0x1cb7340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6778u;
    sub_01CB6778_0x1cb6778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB7344u;
    // 0x1cb7344: 0x0  nop
    ctx->pc = 0x1cb7344u;
    // NOP
    ctx->pc = 0x1cb7348u;
}
