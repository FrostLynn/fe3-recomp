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

// Function: sub_01C311C0
// Address: 0x1c311c0 - 0x1c312ec
void sub_01C311C0_0x1c311c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C311C0_0x1c311c0");
#endif

    switch (ctx->pc) {
        case 0x1c311dcu: goto label_1c311dc;
        case 0x1c311e4u: goto label_1c311e4;
        case 0x1c311f8u: goto label_1c311f8;
        case 0x1c31200u: goto label_1c31200;
        case 0x1c31204u: goto label_1c31204;
        case 0x1c31240u: goto label_1c31240;
        case 0x1c31280u: goto label_1c31280;
        case 0x1c31294u: goto label_1c31294;
        case 0x1c312a0u: goto label_1c312a0;
        case 0x1c312acu: goto label_1c312ac;
        case 0x1c312c0u: goto label_1c312c0;
        case 0x1c312d0u: goto label_1c312d0;
        default: break;
    }

    ctx->pc = 0x1c311c0u;

    // 0x1c311c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c311c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c311c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c311c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c311c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c311c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c311cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c311ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c311d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c311d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c311d4: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C311D4u;
    SET_GPR_U32(ctx, 31, 0x1C311DCu);
    ctx->pc = 0x1C311D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C311D4u;
    // 0x1c311d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C311D4u, 0x1C311DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C311DCu;
label_1c311dc:
    // 0x1c311dc: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C311DCu;
    SET_GPR_U32(ctx, 31, 0x1C311E4u);
    ctx->pc = 0x1C311E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C311DCu;
    // 0x1c311e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C311DCu, 0x1C311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C311E4u;
label_1c311e4:
    // 0x1c311e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c311e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c311e8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C311E8u;
    {
        const bool branch_taken_0x1c311e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C311ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C311E8u;
        // 0x1c311ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c311e8) {
            ctx->pc = 0x1C31214u;
            goto label_1c31214;
        }
    }
    ctx->pc = 0x1C311F0u;
    // 0x1c311f0: 0xc70bdec  jal         func_1C2F7B0
    ctx->pc = 0x1C311F0u;
    SET_GPR_U32(ctx, 31, 0x1C311F8u);
    ctx->pc = 0x1C2F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F7B0u, 0x1C311F0u, 0x1C311F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C311F8u;
label_1c311f8:
    // 0x1c311f8: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C311F8u;
    SET_GPR_U32(ctx, 31, 0x1C31200u);
    ctx->pc = 0x1C311FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C311F8u;
    // 0x1c311fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C311F8u, 0x1C31200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31200u;
label_1c31200:
    // 0x1c31200: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c31200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c31204:
    // 0x1c31204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3120c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3120Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3120Cu;
        // 0x1c31210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3120Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31214u;
label_1c31214:
    // 0x1c31214: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C31214u;
    {
        const bool branch_taken_0x1c31214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31214u;
        // 0x1c31218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31214) {
            ctx->pc = 0x1C31204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31204;
        }
    }
    ctx->pc = 0x1C3121Cu;
    // 0x1c3121c: 0x0  nop
    ctx->pc = 0x1c3121cu;
    // NOP
    // 0x1c31220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c31224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c31228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3122c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c31230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31234: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c31234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c31238: 0xc70bdd8  jal         func_1C2F760
    ctx->pc = 0x1C31238u;
    SET_GPR_U32(ctx, 31, 0x1C31240u);
    ctx->pc = 0x1C3123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31238u;
    // 0x1c3123c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F760u, 0x1C31238u, 0x1C31240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31240u;
label_1c31240:
    // 0x1c31240: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c31240u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c31244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c31244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31248: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1c31248u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x1c3124c: 0x2dcf001c  sltiu       $t7, $t6, 0x1C
    ctx->pc = 0x1c3124cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1c31250: 0x11e00046  beqz        $t7, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C31250u;
    {
        const bool branch_taken_0x1c31250 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31250u;
        // 0x1c31254: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31250) {
            ctx->pc = 0x1C3136Cu;
            return;
        }
    }
    ctx->pc = 0x1C31258u;
    // 0x1c31258: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c31258u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c3125c: 0x3c0e01c3  lui         $t6, 0x1C3
    ctx->pc = 0x1c3125cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)451 << 16));
    // 0x1c31260: 0x25ce3190  addiu       $t6, $t6, 0x3190
    ctx->pc = 0x1c31260u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12688));
    // 0x1c31264: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c31264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c31268: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c31268u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c3126c: 0x1a00008  jr          $t5
    ctx->pc = 0x1C3126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C31274u: goto label_1c31274;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3126Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C31274u;
label_1c31274:
    // 0x1c31274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3127c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1c3127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1c31280:
    // 0x1c31280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c31280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31288: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c31288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3128c: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C3128Cu;
    SET_GPR_U32(ctx, 31, 0x1C31294u);
    ctx->pc = 0x1C31290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3128Cu;
    // 0x1c31290: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C3128Cu, 0x1C31294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31294u;
label_1c31294:
    // 0x1c31294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31298: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C31298u;
    SET_GPR_U32(ctx, 31, 0x1C312A0u);
    ctx->pc = 0x1C3129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31298u;
    // 0x1c3129c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C31298u, 0x1C312A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C312A0u;
label_1c312a0:
    // 0x1c312a0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c312a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c312a4: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C312A4u;
    SET_GPR_U32(ctx, 31, 0x1C312ACu);
    ctx->pc = 0x1C312A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C312A4u;
    // 0x1c312a8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C312A4u, 0x1C312ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C312ACu;
label_1c312ac:
    // 0x1c312ac: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c312acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c312b0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c312b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c312b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c312b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c312b8: 0xc70bddc  jal         func_1C2F770
    ctx->pc = 0x1C312B8u;
    SET_GPR_U32(ctx, 31, 0x1C312C0u);
    ctx->pc = 0x1C312BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C312B8u;
    // 0x1c312bc: 0x240500aa  addiu       $a1, $zero, 0xAA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F770u, 0x1C312B8u, 0x1C312C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C312C0u;
label_1c312c0:
    // 0x1c312c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c312c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c312c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c312c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c312c8: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C312C8u;
    SET_GPR_U32(ctx, 31, 0x1C312D0u);
    ctx->pc = 0x1C312CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C312C8u;
    // 0x1c312cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C312C8u, 0x1C312D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C312D0u;
label_1c312d0:
    // 0x1c312d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c312d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c312d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c312d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c312d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c312d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c312dc: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1c312dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1c312e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c312e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c312e4: 0x870bdde  j           func_1C2F778
    ctx->pc = 0x1C312E4u;
    ctx->pc = 0x1C312E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C312E4u;
    // 0x1c312e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F778u;
    sub_01C2F778_0x1c2f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C312ECu;
}
