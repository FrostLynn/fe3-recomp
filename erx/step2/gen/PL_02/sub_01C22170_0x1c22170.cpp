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

// Function: sub_01C22170
// Address: 0x1c22170 - 0x1c222fc
void sub_01C22170_0x1c22170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C22170_0x1c22170");
#endif

    switch (ctx->pc) {
        case 0x1c22194u: goto label_1c22194;
        case 0x1c221a4u: goto label_1c221a4;
        case 0x1c221b0u: goto label_1c221b0;
        case 0x1c221c0u: goto label_1c221c0;
        case 0x1c221ccu: goto label_1c221cc;
        case 0x1c221ecu: goto label_1c221ec;
        case 0x1c22204u: goto label_1c22204;
        case 0x1c22248u: goto label_1c22248;
        case 0x1c2225cu: goto label_1c2225c;
        case 0x1c22268u: goto label_1c22268;
        case 0x1c22278u: goto label_1c22278;
        case 0x1c22288u: goto label_1c22288;
        case 0x1c22294u: goto label_1c22294;
        case 0x1c222d0u: goto label_1c222d0;
        case 0x1c222e0u: goto label_1c222e0;
        default: break;
    }

    ctx->pc = 0x1c22170u;

    // 0x1c22170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c22170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c22174: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c22174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c22178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c22178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2217c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c22180: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c22180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c22184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c22184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22188: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c22188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c2218c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2218Cu;
    SET_GPR_U32(ctx, 31, 0x1C22194u);
    ctx->pc = 0x1C22190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2218Cu;
    // 0x1c22190: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2218Cu, 0x1C22194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22194u;
label_1c22194:
    // 0x1c22194: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c22194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c22198: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c22198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c2219c: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C2219Cu;
    SET_GPR_U32(ctx, 31, 0x1C221A4u);
    ctx->pc = 0x1C221A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2219Cu;
    // 0x1c221a0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C2219Cu, 0x1C221A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C221A4u;
label_1c221a4:
    // 0x1c221a4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1c221a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c221a8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C221A8u;
    SET_GPR_U32(ctx, 31, 0x1C221B0u);
    ctx->pc = 0x1C221ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C221A8u;
    // 0x1c221ac: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C221A8u, 0x1C221B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C221B0u;
label_1c221b0:
    // 0x1c221b0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c221b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c221b4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c221b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c221b8: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C221B8u;
    SET_GPR_U32(ctx, 31, 0x1C221C0u);
    ctx->pc = 0x1C221BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C221B8u;
    // 0x1c221bc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C221B8u, 0x1C221C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C221C0u;
label_1c221c0:
    // 0x1c221c0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1c221c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c221c4: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C221C4u;
    SET_GPR_U32(ctx, 31, 0x1C221CCu);
    ctx->pc = 0x1C221C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C221C4u;
    // 0x1c221c8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C221C4u, 0x1C221CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C221CCu;
label_1c221cc:
    // 0x1c221cc: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c221ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c221d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c221d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c221d4: 0x160f0006  bne         $s0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C221D4u;
    {
        const bool branch_taken_0x1c221d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C221D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C221D4u;
        // 0x1c221d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c221d4) {
            ctx->pc = 0x1C221F0u;
            goto label_1c221f0;
        }
    }
    ctx->pc = 0x1C221DCu;
    // 0x1c221dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c221dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c221e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c221e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c221e4: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C221E4u;
    SET_GPR_U32(ctx, 31, 0x1C221ECu);
    ctx->pc = 0x1C221E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C221E4u;
    // 0x1c221e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C221E4u, 0x1C221ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C221ECu;
label_1c221ec:
    // 0x1c221ec: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c221ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c221f0:
    // 0x1c221f0: 0x16000033  bnez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C221F0u;
    {
        const bool branch_taken_0x1c221f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C221F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C221F0u;
        // 0x1c221f4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c221f0) {
            ctx->pc = 0x1C222C0u;
            goto label_1c222c0;
        }
    }
    ctx->pc = 0x1C221F8u;
    // 0x1c221f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c221f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c221fc: 0xc707c6c  jal         func_1C1F1B0
    ctx->pc = 0x1C221FCu;
    SET_GPR_U32(ctx, 31, 0x1C22204u);
    ctx->pc = 0x1C22200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C221FCu;
    // 0x1c22200: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1B0u, 0x1C221FCu, 0x1C22204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22204u;
label_1c22204:
    // 0x1c22204: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c22204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c22208: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C22208u;
    {
        const bool branch_taken_0x1c22208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c22208) {
            ctx->pc = 0x1C2220Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C22208u;
            // 0x1c2220c: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C222BCu;
            goto label_1c222bc;
        }
    }
    ctx->pc = 0x1C22210u;
    // 0x1c22210: 0x8e4f0008  lw          $t7, 0x8($s2)
    ctx->pc = 0x1c22210u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c22214: 0x25effff5  addiu       $t7, $t7, -0xB
    ctx->pc = 0x1c22214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967285));
    // 0x1c22218: 0x2dee0015  sltiu       $t6, $t7, 0x15
    ctx->pc = 0x1c22218u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1c2221c: 0x11c00043  beqz        $t6, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C2221Cu;
    {
        const bool branch_taken_0x1c2221c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2221Cu;
        // 0x1c22220: 0x3c0e01c2  lui         $t6, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2221c) {
            ctx->pc = 0x1C2232Cu;
            return;
        }
    }
    ctx->pc = 0x1C22224u;
    // 0x1c22224: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c22224u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c22228: 0x25ce3344  addiu       $t6, $t6, 0x3344
    ctx->pc = 0x1c22228u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13124));
    // 0x1c2222c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c2222cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c22230: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c22230u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c22234: 0x1a00008  jr          $t5
    ctx->pc = 0x1C22234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2223Cu: goto label_1c2223c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22234u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C2223Cu;
label_1c2223c:
    // 0x1c2223c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22244: 0x240601db  addiu       $a2, $zero, 0x1DB
    ctx->pc = 0x1c22244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
label_1c22248:
    // 0x1c22248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c22248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2224c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2224cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22250: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c22250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c22254: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C22254u;
    SET_GPR_U32(ctx, 31, 0x1C2225Cu);
    ctx->pc = 0x1C22258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22254u;
    // 0x1c22258: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C22254u, 0x1C2225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2225Cu;
label_1c2225c:
    // 0x1c2225c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2225cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22260: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C22260u;
    SET_GPR_U32(ctx, 31, 0x1C22268u);
    ctx->pc = 0x1C22264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22260u;
    // 0x1c22264: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C22260u, 0x1C22268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22268u;
label_1c22268:
    // 0x1c22268: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c22268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2226c: 0x26440390  addiu       $a0, $s2, 0x390
    ctx->pc = 0x1c2226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    // 0x1c22270: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C22270u;
    SET_GPR_U32(ctx, 31, 0x1C22278u);
    ctx->pc = 0x1C22274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22270u;
    // 0x1c22274: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C22270u, 0x1C22278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22278u;
label_1c22278:
    // 0x1c22278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c22278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2227c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22280: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C22280u;
    SET_GPR_U32(ctx, 31, 0x1C22288u);
    ctx->pc = 0x1C22284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22280u;
    // 0x1c22284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C22280u, 0x1C22288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22288u;
label_1c22288:
    // 0x1c22288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c22288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2228c: 0xc707c62  jal         func_1C1F188
    ctx->pc = 0x1C2228Cu;
    SET_GPR_U32(ctx, 31, 0x1C22294u);
    ctx->pc = 0x1C22290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2228Cu;
    // 0x1c22290: 0x240500bc  addiu       $a1, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F188u, 0x1C2228Cu, 0x1C22294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22294u;
label_1c22294:
    // 0x1c22294: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c22294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c22298: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c22298u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c2229c: 0xae2f0018  sw          $t7, 0x18($s1)
    ctx->pc = 0x1c2229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 15));
    // 0x1c222a0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c222a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c222a4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c222a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c222a8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C222A8u;
    {
        const bool branch_taken_0x1c222a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C222ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C222A8u;
        // 0x1c222ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c222a8) {
            ctx->pc = 0x1C222BCu;
            goto label_1c222bc;
        }
    }
    ctx->pc = 0x1C222B0u;
    // 0x1c222b0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c222b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c222b4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c222b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
    // 0x1c222b8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1c222b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c222bc:
    // 0x1c222bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c222bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c222c0:
    // 0x1c222c0: 0x160f0008  bne         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C222C0u;
    {
        const bool branch_taken_0x1c222c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C222C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C222C0u;
        // 0x1c222c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c222c0) {
            ctx->pc = 0x1C222E4u;
            goto label_1c222e4;
        }
    }
    ctx->pc = 0x1C222C8u;
    // 0x1c222c8: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C222C8u;
    SET_GPR_U32(ctx, 31, 0x1C222D0u);
    ctx->pc = 0x1C222CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C222C8u;
    // 0x1c222cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C222C8u, 0x1C222D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C222D0u;
label_1c222d0:
    // 0x1c222d0: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C222D0u;
    {
        const bool branch_taken_0x1c222d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C222D0u;
        // 0x1c222d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c222d0) {
            ctx->pc = 0x1C222E4u;
            goto label_1c222e4;
        }
    }
    ctx->pc = 0x1C222D8u;
    // 0x1c222d8: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C222D8u;
    SET_GPR_U32(ctx, 31, 0x1C222E0u);
    ctx->pc = 0x1C222DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C222D8u;
    // 0x1c222dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C222D8u, 0x1C222E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C222E0u;
label_1c222e0:
    // 0x1c222e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c222e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c222e4:
    // 0x1c222e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c222e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c222e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c222e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c222ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c222ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c222f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c222f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c222f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C222F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C222F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C222F4u;
        // 0x1c222f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C222F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C222FCu;
}
