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

// Function: sub_01C504F0
// Address: 0x1c504f0 - 0x1c505a8
void sub_01C504F0_0x1c504f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C504F0_0x1c504f0");
#endif

    switch (ctx->pc) {
        case 0x1c5052cu: goto label_1c5052c;
        case 0x1c5053cu: goto label_1c5053c;
        case 0x1c50550u: goto label_1c50550;
        case 0x1c50564u: goto label_1c50564;
        case 0x1c50574u: goto label_1c50574;
        default: break;
    }

    ctx->pc = 0x1c504f0u;

    // 0x1c504f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c504f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c504f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c504f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c504f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c504f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c504fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c504fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c50500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c50500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50508: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c50508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5050c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50510: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c50510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c50514: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c50514u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c50518: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c50518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c5051c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c5051cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c50520: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c50520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50524: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50524u;
    SET_GPR_U32(ctx, 31, 0x1C5052Cu);
    ctx->pc = 0x1C50528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50524u;
    // 0x1c50528: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50524u, 0x1C5052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5052Cu;
label_1c5052c:
    // 0x1c5052c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c5052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c50530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c50530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50534: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C50534u;
    SET_GPR_U32(ctx, 31, 0x1C5053Cu);
    ctx->pc = 0x1C50538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50534u;
    // 0x1c50538: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C50534u, 0x1C5053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5053Cu;
label_1c5053c:
    // 0x1c5053c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c5053cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c50540: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c50540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50548: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C50548u;
    SET_GPR_U32(ctx, 31, 0x1C50550u);
    ctx->pc = 0x1C5054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50548u;
    // 0x1c5054c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C50548u, 0x1C50550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50550u;
label_1c50550:
    // 0x1c50550: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c50550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c50554: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c50554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c50558: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c50558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5055c: 0xc713e68  jal         func_1C4F9A0
    ctx->pc = 0x1C5055Cu;
    SET_GPR_U32(ctx, 31, 0x1C50564u);
    ctx->pc = 0x1C50560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5055Cu;
    // 0x1c50560: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A0u, 0x1C5055Cu, 0x1C50564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50564u;
label_1c50564:
    // 0x1c50564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c50564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c50568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5056c: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C5056Cu;
    SET_GPR_U32(ctx, 31, 0x1C50574u);
    ctx->pc = 0x1C50570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5056Cu;
    // 0x1c50570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C5056Cu, 0x1C50574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50574u;
label_1c50574:
    // 0x1c50574: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c50574u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c50578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5057c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c5057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50588: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c50588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5058c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c5058cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c50590: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c50590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c50594: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c50594u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c50598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c50598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5059c: 0x8713e6a  j           func_1C4F9A8
    ctx->pc = 0x1C5059Cu;
    ctx->pc = 0x1C505A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5059Cu;
    // 0x1c505a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A8u;
    sub_01C4F9A8_0x1c4f9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C505A4u;
    // 0x1c505a4: 0x0  nop
    ctx->pc = 0x1c505a4u;
    // NOP
    ctx->pc = 0x1c505a8u;
}
