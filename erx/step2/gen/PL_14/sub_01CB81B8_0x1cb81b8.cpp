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

// Function: sub_01CB81B8
// Address: 0x1cb81b8 - 0x1cb82e4
void sub_01CB81B8_0x1cb81b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB81B8_0x1cb81b8");
#endif

    switch (ctx->pc) {
        case 0x1cb81d4u: goto label_1cb81d4;
        case 0x1cb81dcu: goto label_1cb81dc;
        case 0x1cb81f0u: goto label_1cb81f0;
        case 0x1cb81f8u: goto label_1cb81f8;
        case 0x1cb81fcu: goto label_1cb81fc;
        case 0x1cb8238u: goto label_1cb8238;
        case 0x1cb8278u: goto label_1cb8278;
        case 0x1cb828cu: goto label_1cb828c;
        case 0x1cb8298u: goto label_1cb8298;
        case 0x1cb82a4u: goto label_1cb82a4;
        case 0x1cb82b8u: goto label_1cb82b8;
        case 0x1cb82c8u: goto label_1cb82c8;
        default: break;
    }

    ctx->pc = 0x1cb81b8u;

    // 0x1cb81b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb81b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb81bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb81bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb81c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb81c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb81c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb81c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb81c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb81c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb81cc: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB81CCu;
    SET_GPR_U32(ctx, 31, 0x1CB81D4u);
    ctx->pc = 0x1CB81D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB81CCu;
    // 0x1cb81d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB81CCu, 0x1CB81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB81D4u;
label_1cb81d4:
    // 0x1cb81d4: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB81D4u;
    SET_GPR_U32(ctx, 31, 0x1CB81DCu);
    ctx->pc = 0x1CB81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB81D4u;
    // 0x1cb81d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB81D4u, 0x1CB81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB81DCu;
label_1cb81dc:
    // 0x1cb81dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb81dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb81e0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB81E0u;
    {
        const bool branch_taken_0x1cb81e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB81E0u;
        // 0x1cb81e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb81e0) {
            ctx->pc = 0x1CB820Cu;
            goto label_1cb820c;
        }
    }
    ctx->pc = 0x1CB81E8u;
    // 0x1cb81e8: 0xc72d9ec  jal         func_1CB67B0
    ctx->pc = 0x1CB81E8u;
    SET_GPR_U32(ctx, 31, 0x1CB81F0u);
    ctx->pc = 0x1CB67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67B0u, 0x1CB81E8u, 0x1CB81F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB81F0u;
label_1cb81f0:
    // 0x1cb81f0: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB81F0u;
    SET_GPR_U32(ctx, 31, 0x1CB81F8u);
    ctx->pc = 0x1CB81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB81F0u;
    // 0x1cb81f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB81F0u, 0x1CB81F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB81F8u;
label_1cb81f8:
    // 0x1cb81f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb81f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb81fc:
    // 0x1cb81fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb81fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8204: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8204u;
        // 0x1cb8208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB820Cu;
label_1cb820c:
    // 0x1cb820c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB820Cu;
    {
        const bool branch_taken_0x1cb820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB820Cu;
        // 0x1cb8210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb820c) {
            ctx->pc = 0x1CB81FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb81fc;
        }
    }
    ctx->pc = 0x1CB8214u;
    // 0x1cb8214: 0x0  nop
    ctx->pc = 0x1cb8214u;
    // NOP
    // 0x1cb8218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb821c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb8220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb8224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb8224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb8228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb8228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb822c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb8230: 0xc72d9d8  jal         func_1CB6760
    ctx->pc = 0x1CB8230u;
    SET_GPR_U32(ctx, 31, 0x1CB8238u);
    ctx->pc = 0x1CB8234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8230u;
    // 0x1cb8234: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6760u, 0x1CB8230u, 0x1CB8238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8238u;
label_1cb8238:
    // 0x1cb8238: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cb8238u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cb823c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb823cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8240: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1cb8240u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1cb8244: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1cb8244u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cb8248: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CB8248u;
    {
        const bool branch_taken_0x1cb8248 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8248u;
        // 0x1cb824c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8248) {
            ctx->pc = 0x1CB8344u;
            return;
        }
    }
    ctx->pc = 0x1CB8250u;
    // 0x1cb8250: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cb8250u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cb8254: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cb8254u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8258: 0x25ce9ed0  addiu       $t6, $t6, -0x6130
    ctx->pc = 0x1cb8258u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942416));
    // 0x1cb825c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb825cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb8260: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cb8260u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb8264: 0x1a00008  jr          $t5
    ctx->pc = 0x1CB8264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB826Cu: goto label_1cb826c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB826Cu;
label_1cb826c:
    // 0x1cb826c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8274: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1cb8274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1cb8278:
    // 0x1cb8278: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb8278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb827c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb827cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8280: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb8280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb8284: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8284u;
    SET_GPR_U32(ctx, 31, 0x1CB828Cu);
    ctx->pc = 0x1CB8288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8284u;
    // 0x1cb8288: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8284u, 0x1CB828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB828Cu;
label_1cb828c:
    // 0x1cb828c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8290: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8290u;
    SET_GPR_U32(ctx, 31, 0x1CB8298u);
    ctx->pc = 0x1CB8294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8290u;
    // 0x1cb8294: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8290u, 0x1CB8298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8298u;
label_1cb8298:
    // 0x1cb8298: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb8298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb829c: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB829Cu;
    SET_GPR_U32(ctx, 31, 0x1CB82A4u);
    ctx->pc = 0x1CB82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB829Cu;
    // 0x1cb82a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB829Cu, 0x1CB82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB82A4u;
label_1cb82a4:
    // 0x1cb82a4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cb82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cb82a8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cb82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cb82ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb82acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb82b0: 0xc72d9dc  jal         func_1CB6770
    ctx->pc = 0x1CB82B0u;
    SET_GPR_U32(ctx, 31, 0x1CB82B8u);
    ctx->pc = 0x1CB82B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB82B0u;
    // 0x1cb82b4: 0x240500cb  addiu       $a1, $zero, 0xCB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6770u, 0x1CB82B0u, 0x1CB82B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB82B8u;
label_1cb82b8:
    // 0x1cb82b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb82b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb82bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb82bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82c0: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB82C0u;
    SET_GPR_U32(ctx, 31, 0x1CB82C8u);
    ctx->pc = 0x1CB82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB82C0u;
    // 0x1cb82c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB82C0u, 0x1CB82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB82C8u;
label_1cb82c8:
    // 0x1cb82c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb82c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb82ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb82d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb82d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb82d4: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x1cb82d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1cb82d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb82d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb82dc: 0x872d9de  j           func_1CB6778
    ctx->pc = 0x1CB82DCu;
    ctx->pc = 0x1CB82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB82DCu;
    // 0x1cb82e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6778u;
    sub_01CB6778_0x1cb6778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB82E4u;
}
